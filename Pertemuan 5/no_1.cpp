// Nama: Irenia Maisa Kamila
// NIM: 2506031
// Kelas: 2B

#include <iostream>
#include <algorithm>
using namespace std;

struct mahasiswa {
    string nama, jurusan, matkul;
    int totalMhs[50], nilai;
};

int main () {
    mahasiswa abc;
    int totalMahasiswa[50], nilai, max, min;
    float avg;

    cout << "Total mahasiswa: ", cin >> totalMahasiswa[50];

    for (int index = 0; index < 50; index++) {
        cout << "Masukkan nilai mahasiswa ke-" << index + 1 << ": "; cin >> nilai;
        if ( abc.nilai < 0 || abc.nilai > 100 ) {
            cout << "Harap masukkan angka 0-100" << endl;
        }
        if (index == 0) {
            max = nilai;
            min = nilai;
        } else {
            max = max(max, nilai);
            min = min(min, nilai);
        }
        avg += nilai;
    }

    nilai /= 50;
    cout << "Nilai tertinggi: " << max << endl;
    cout << "Nilai terendah: " << min << endl;
    cout << "Nilai rata-rata: " << avg << endl;
}