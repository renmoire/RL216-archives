// Nama: Irenia Maisa Kamila
// NIM: 2506031
// Kelas: 2B

#include <iostream>
using namespace std;

const int jumlahTabung = 4;
const int kapasitas = 3;

struct stack {
    string warna[kapasitas];
    int atas;
};

void inisialisasi(stack &s) {
    s.atas = -1;
}

bool kosong(stack s) {
    return s.atas == -1;
}

bool penuh(stack s) {
    return s.atas == kapasitas - 1;
}

void push(stack &s, string w) {
    if (penuh(s) == false) {
        s.warna[++s.atas] = w;
    }
}

string pop(stack &s) {
    if (kosong(s) == false) {
        return s.warna[s.atas--];
    }
    return "";
}

string lihatAtas(stack s) {
    if (kosong(s) == false) {
        return s.warna[s.atas];
    }
    return "";
}

void tampilkan(stack tabung[], int n) {
    cout << "\n---------- TABUNG ----------\n\n";
    for (int i = 0; i < n; i++) {
        cout << "Tabung " << i + 1 << ": ";
        if (kosong(tabung[i])) {
            cout << "-";
        } else {
            for (int j = 0; j <= tabung[i].atas; j++) {
                cout << tabung[i].warna[j] << " ";
            }
        }
        cout << endl;
    }
}

bool gerakanValid(stack &asal, stack &tujuan) {
    if (kosong(asal)) {
        return false;
    }
    if (penuh(tujuan)) {
        return false;
    }
    if (kosong(tujuan)) {
        return true;
    }
    return lihatAtas(asal) == lihatAtas(tujuan);
}

void pindahkan(stack &asal, stack &tujuan) {
    if (gerakanValid(asal, tujuan)) {
        string bola = pop(asal);
        push(tujuan, bola);
        cout << "Bola " << bola << " berhasil dipindahkan.\n";
    } else {
        cout << "Gerakan tidak valid!\n";
    }
}

bool selesai(stack tabung[], int n) {
    for (int i = 0; i < n; i++) {
        if (kosong(tabung[i])) {
            continue;
        }
        if (penuh(tabung[i]) == false) {
            return false;
        }
        string pertama = tabung[i].warna[0];
        for (int j = 1; j <= tabung[i].atas; j++) {
            if (tabung[i].warna[j] != pertama) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    stack tabung[jumlahTabung];

    for (int i = 0; i < jumlahTabung; i++) {
        inisialisasi(tabung[i]);
    }

    push(tabung[0], "Biru");   
    push(tabung[0], "Kuning"); 
    push(tabung[0], "Hijau");

    push(tabung[1], "Kuning"); 
    push(tabung[1], "Kuning"); 
    push(tabung[1], "Hijau");

    push(tabung[2], "Hijau");  
    push(tabung[2], "Biru");   
    push(tabung[2], "Biru");

    int asal, tujuan;

    while (true) {
        tampilkan(tabung, jumlahTabung);

        if (selesai(tabung, jumlahTabung)) {
            cout << "\n\nMenang\n";
            break;
        }

        cout << "\nAmbil dari (1-4): "; cin >> asal;
        cout << "Taruh ke (1-4): "; cin >> tujuan;

        asal--;
        tujuan--;

        if (asal >= 0 && asal < jumlahTabung && tujuan >= 0 && tujuan < jumlahTabung) {
            pindahkan(tabung[asal], tabung[tujuan]);
        } else {
            cout << "Input tidak valid\n";
        }
    }

    return 0;
}