// Nama: Irenia Maisa Kamia
// NIM: 2506031
// Kelas: 2B

#include <iostream>
#include <string>
using namespace std;

struct elmahasiswa {
    string namaMahasiswa;
    int nim, angkatan;
    string prodi;
};

struct elmatkul {
    elmahasiswa elsigma;
    string namaMatkul, kodeMatkul;  
};

int main() {
    elmatkul mk;

    cout << "Input data di bawah ini\n"
         << "Nama lengkap : "; getline(cin, mk.elsigma.namaMahasiswa); cout 
         << "NIM          : "; cin >> mk.elsigma.nim; cout 
         << "Angkatan     : "; cin >> mk.elsigma.angkatan; cin.ignore();cout
         << "Prodi        : "; getline(cin, mk.elsigma.prodi); cout 
         << "Matkul       : "; getline(cin, mk.namaMatkul); cout 
         << "Kode         : "; cin >> mk.kodeMatkul;

    cout << "\n\n\nData:\n"
         << mk.elsigma.namaMahasiswa << " (" << mk.elsigma.nim << ")\n"
         << "Angkatan " << mk.elsigma.angkatan << " - " << mk.elsigma.prodi << "\n"
         << "Mengambil " << mk.namaMatkul << " [" << mk.kodeMatkul << "]\n";

    return 0;
}