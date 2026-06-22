// Nama: Irenia Maisa Kamila
// NIM: 2506031
// Kelas: 2B

#include <iostream>
using namespace std;

const int maks = 3;

struct parkir {
    int top;
    string isi[maks];
} parkir;

void createParkir() {
    parkir.top = 0;
}

int isEmptyParkir() {
    if (parkir.top == 0) {
        return 1;
    } else {
        return 0;
    }
}

int isFullParkir() {
    if (parkir.top >= maks) {
        return 1;
    } else {
        return 0;
    }
}

void insertParkir(string nopol) {
    if (isFullParkir()) {
        cout << "Parkir penuh" << endl;
    } else {
        parkir.isi[parkir.top] = nopol;
        cout << "Kendaraan " << nopol << " berhasil masuk." << endl;
        parkir.top++;
    }
}

void deleteParkir() {
    if (isEmptyParkir()) {
        cout << "Parkir kosong" << endl;
    } else {
        string pop;
        pop = parkir.isi[0];
        for (int i = 1; i < parkir.top; i++) {
            parkir.isi[i - 1] = parkir.isi[i];
        }
        parkir.top--;
        cout << pop << " keluar dari parkir" << endl;
    }
}

void displayParkir() {
    if (!isEmptyParkir()) {
        // cout << "\n--------------------------------------" << endl;
        cout << "\nJumlah kendaraan : " << parkir.top << endl;
        cout << "Sisa kapasitas   : " << maks - parkir.top << endl;
        for (int i = 0; i < parkir.top; i++) {
            cout << "- " << parkir.isi[i] << endl;
        }
        // cout << "--------------------------------------" << endl;
    } else {
        cout << "Parkir kosong" << endl;
    }
}

int main() {
    createParkir();
 
    int pilihan;
    string nopol;
 
    do {
        displayParkir();
        cout << "\n--------------------------------------\n" << endl;
        cout << "Kapasitas maks: " << maks << endl;
        cout << "1. Kendaraan masuk" << endl;
        cout << "2. Kendaraan keluar" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;
 
        if (pilihan == 1) {
            cout << "Masukkan nopol kendaraan: "; cin >> nopol;
            insertParkir(nopol);
        } else if (pilihan == 2) {
            deleteParkir();
        } else if (pilihan == 3) {
            cout << "Keluar dari program." << endl;
            return 0;
        } else {
            cout << "Pilihan tidak valid!" << endl;
        }
 
    } while (pilihan != 4);
 
    return 0;
}