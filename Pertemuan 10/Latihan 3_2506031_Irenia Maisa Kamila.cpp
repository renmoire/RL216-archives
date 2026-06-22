//Nama: Irenia Maisa Kamila
// NIM: 2506031
// Kelas: 2B

#include <iostream>
using namespace std;

const int ukuran = 5;

struct Penumpang {
    string nama;
    int nik;
};

struct antrian {
    int top;
    Penumpang isi[ukuran];
} antrian;

void createQueue() {
    antrian.top = 0;
}

int isEmpty() {
    if (antrian.top == 0) {
        return 1;
    } else {
        return 0;
    }
}

int isFull() {
    if (antrian.top >= ukuran) {
        return 1;
    } else {
        return 0;
    }
}

void insertQueue(string nama, int nik) {
    if (isFull() == 1) {
        cout << "Antrian sudah penuh" << endl;
    } else {
        antrian.isi[antrian.top].nama = nama;
        antrian.isi[antrian.top].nik  = nik;
        cout << nama << " masuk ke antrian" << endl;
        antrian.top++;
    }
}

void deleteQueue() {
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        string pop = antrian.isi[0].nama;
        for (int i = 1; i < antrian.top; i++) {
            antrian.isi[i - 1] = antrian.isi[i];
        }
        antrian.top--;
        cout << pop << " keluar dari antrian" << endl;
    }
}

void displayQueue() {
    cout << "\n--------------- Antrian ---------------" << endl;
    if (!isEmpty()) {
        cout << "Jumlah antrian saat ini: " << antrian.top << endl;
        for (int i = 0; i < antrian.top; i++) {
            cout << "- " << antrian.isi[i].nama << " (NIK. " << antrian.isi[i].nik << ")" << endl;
        }
        cout << "---------------------------------------\n" << endl;
    } else {
        cout << "Belum ada antrian\n" << endl;
        cout << "---------------------------------------\n" << endl;
    }
}

void find() {
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        string cari;
        bool ditemukan = false;
        cout << "Nama yang ingin dicari: ";
        cin >> cari;
        for (int i = 0; i < antrian.top; i++) {
            if (antrian.isi[i].nama == cari || to_string(antrian.isi[i].nik) == cari) {
                cout << endl << cari << " ada dalam antrian ke-" << i + 1 << endl;
                cout << "Nama: " << antrian.isi[i].nama << "\nNIK: " << antrian.isi[i].nik << endl;
                ditemukan = true;
                break;
            }
        }
        if (!ditemukan) {
            cout << cari << " tidak ada dalam antrian" << endl;
        }
    }
}

int main() {
    createQueue();

    int pilihan;
    string nama;
    int nik;

    do {
        displayQueue();
        cout << "1. Tambah antrian" << endl;
        cout << "2. Hapus antrian" << endl;
        cout << "3. Cari nama dalam antrian" << endl;
        cout << "\n[0] Keluar\n" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;

        if (pilihan == 1) {
            cout << "Nama: "; cin >> nama;
            cout << "NIK : "; cin >> nik;
            insertQueue(nama, nik);
        } else if (pilihan == 2) {
            deleteQueue();
        } else if (pilihan == 3) {
            find();
        } else if (pilihan == 0) {
            cout << "Keluar dari program." << endl;
            return 0;
        } else {
            cout << "Pilihan tidak valid!" << endl;
        }

    } while (pilihan != 0);

    return 0;
}