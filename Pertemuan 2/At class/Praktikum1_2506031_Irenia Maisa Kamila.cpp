//* Nama: Irenia Maisa Kamila
//* NIM: 2506031
//* Kelas: 2B

#include <iostream>
using namespace std;

int a, b, alas, tinggi, angka;

int kalkulator() {
    // soal 1
    cout << "\n\n------ Kalkulator Pertambahan Simple ------\n\n";
    cout << "Masukkan 3 angka" << endl;

    cout << "Angka ke-1 > ";
    cin >> a;

    cout << "Angka ke-2 > ";
    cin >> b;

    cout << "\nHasil:\n"
         << a << " + " << b
         << " = " << a + b << endl;

    return 0;
}
    
int segitiga() {
    // soal 2
    cout << "\n\n------ Hitung luas segitiga ------\n\n";
    cout << "Masukkan alas dan tinggi segitiga" << endl;

    cout << "Alas > ";
    cin >> alas;

    cout << "Tinggi > ";
    cin >> tinggi;

    cout << "\nHasil:\n"
         << "Luas segitiga dengan alas " << alas << " dan tinggi " << tinggi
         << " adalah " << 0.5 * alas * tinggi << endl;
    
    return 0;
}

int genjil() {
    // soal 3
    cout << "\nInput angka > ";
    cin >> angka;

    if (angka % 2 == 0) {
        cout << angka << " adalah genap" << endl;
    } else {
        cout << angka << " adalah ganjil" << endl;
    }

    return 0;
}


int main() {
    kalkulator();
    segitiga();
    genjil();
}