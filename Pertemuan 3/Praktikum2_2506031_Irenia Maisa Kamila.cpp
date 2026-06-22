// Nama: Irenia Maisa Kamia
// NIM: 2506031
// Kelas: 2B
// operator i/o

#include <iostream>
#include <string>
using namespace std;

struct mahasiswa
{
    string namaLengkap;
    int nim, angkatan;
    string prodi;
    float ipk;
    bool beasiswa;
};

int main() {
    mahasiswa reguler, beasiswa;

    cout << "\nData Mahasiswa Reguler" << endl
         << "Nama lengkap  : "; cin >> reguler.namaLengkap; cout
         << "NIM           : "; cin >> reguler.nim; cout 
         << "Angkatan      : "; cin >> reguler.angkatan; cout 
         << "Program studi : "; cin >> reguler.prodi; cout 
         << "IPK           : "; cin >> reguler.ipk; cout 
         << "Apakah mahasiswa reguler mendapat beasiswa? (y/n): ";
    string beasiswaInput; cin >> beasiswaInput;
    reguler.beasiswa = (beasiswaInput == "y" || beasiswaInput == "Y");

    cout << "\nData Mahasiswa Beasiswa" << endl
         << "Nama lengkap  : "; cin >> beasiswa.namaLengkap; cout 
         << "NIM           : "; cin >> beasiswa.nim; cout 
         << "Angkatan      : "; cin >> beasiswa.angkatan; cout 
         << "Program studi : "; cin >> beasiswa.prodi; cout 
         << "IPK           : "; cin >> beasiswa.ipk; cout 
         << "Apakah mahasiswa beasiswa mendapat beasiswa? (y/n): ";
    string beasiswaInput2; cin >> beasiswaInput2;
    beasiswa.beasiswa = (beasiswaInput2 == "y" || beasiswaInput2 == "Y");

    cout << "\n\nDisplay Mahasiswa Reguler"
         << "\nMahasiswa Reguler"
         << "\nNama Mahasiswa  : " << reguler.namaLengkap
         << "\nNIM             : " << reguler.nim
         << "\nAngkatan        : " << reguler.angkatan
         << "\nProgram Studi   : " << reguler.prodi
         << "\nIPK             : " << reguler.ipk
         << "\nBeasiswa        : " << (reguler.beasiswa ? "Ya" : "Tidak") << endl;
    cout << "\n\n";

    cout << "Display Mahasiswa Beasiswa" 
         << "\nNama Mahasiswa  : " << beasiswa.namaLengkap
         << "\nNIM             : " << beasiswa.nim
         << "\nAngkatan        : " << beasiswa.angkatan
         << "\nProgram Studi   : " << beasiswa.prodi
         << "\nIPK             : " << beasiswa.ipk
         << "\nBeasiswa        : " << (beasiswa.beasiswa ? "Ya" : "Tidak") << endl;

    return 0;
}