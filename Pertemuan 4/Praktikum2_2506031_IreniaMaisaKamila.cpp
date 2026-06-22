// Nama: Irenia Maisa Kamila
// NIM: 2506031
// Kelas: 2B

#include <iostream>
using namespace std;

void elbingung() {
    int angka = 25;
    int *pointer = &angka;

    cout << "Nilai angka: " << angka << endl
         << "Alamat angka: " << &angka << endl
         << "Nilai pointer: " << *pointer << endl;
}

int main () {
    elbingung();
    return 0;
}