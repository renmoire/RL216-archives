// Nama: Irenia Maisa Kamila
// NIM: 2506031
// Kelas: 2B

#include <iostream>
#include <iomanip>
using namespace std;

struct elmatkul {
    string nama;
    int nim;
    float t1, t2, t3, nilai;
};

int main() {
    elmatkul indv;
    cout << fixed << setprecision(1);

    cout << "Nama Mahasiswa  > "; getline(cin, indv.nama); cout
         << "NIM             > "; cin >> indv.nim; cout
         << "Tugas 1         > "; cin >> indv.t1; cout
         << "Tugas 2         > "; cin >> indv.t2; cout
         << "Tugas 3         > "; cin >> indv.t3; cout << endl;

    indv.nilai = (indv.t1 + indv.t2 + indv.t3) / 3.0;

    cout << "Nama         : " << indv.nama << endl
         << "NIM          : " << indv.nim << endl
         << "Nilai Akhir  : " << indv.nilai << endl;

    if (indv.nilai > 75) {
        cout << endl << "LULUS" << endl; } 
    else {
        cout << endl << "Nice try" << endl; }

    return 0;
}