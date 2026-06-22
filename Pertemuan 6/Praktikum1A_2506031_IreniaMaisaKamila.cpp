// Nama: Irenia Maisa Kamila
// NIM: 2506031
// Kelas: 2B

#include <iostream>
using namespace std;

long long hitungFactorial(int input) {
    long long hasil = 1;
    for (int i = 1; i <= input; i++) {
        hasil *= i;
    }
    return hasil;
}

int main() {
    cout << "---------Hitung faktorial---------\n" << endl;

    int angka;

    cout << "Input angka: ";
    while (!(cin >> angka)) {
        cin.clear();           
        cin.ignore(1000, '\n');
        cout << "Input harus angka! Coba lagi: ";
    }

    if (angka < 0) {
        cout << "Faktorial tidak bisa dihitung untuk angka negatif!" << endl;
        return 1;
    }

    if (angka > 20) {
        cout << "Angka terlalu besar! Maksimal 20." << endl;
        return 1;
    }

    cout << angka << "! = " << hitungFactorial(angka) << endl;

    return 0;
}