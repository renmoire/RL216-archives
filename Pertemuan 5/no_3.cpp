// Nama: Irenia Maisa Kamila
// NIM: 2506031
// Kelas: 2B

#include <iostream>
#include <algorithm>
using namespace std;

struct pegawai {
    string id, nama;
    int lembur[5], jumlahPegawai[10];
    float gajiPokok, tunjangan, totalPendapatan, honor;
};

int main () {
    pegawai wai;
    int *fointer = &wai.jumlahPegawai[10];

    cout << "Masukkan jumlah pegawai: "; cin >> wai.jumlahPegawai[10];
    for (int index = 0; index < wai.jumlahPegawai[10]; index++) {
        cout << "Masukkan data ke-" << index + 1 << endl;

        cout << "ID: "; cin >> wai.id; cout
             << "Nama: "; cin >> wai.nama; cout
             << "Gaji pokpok: "; cin >> wai.gajiPokok; cout
             << "Jumlah lembur: "; cin >> wai.lembur[5]; cout
             << "Tunjangan: "; cin >> wai.tunjangan;
    }

    wai.id += wai.id;
    wai.nama += wai.nama;

    for (int index = 0; index < wai.jumlahPegawai[10]; index++)
    cout << "ID: " << wai.id << endl
         << "Nama: " << wai.nama << endl
         << "Total pendapatan: " << wai.totalPendapatan << endl;
}