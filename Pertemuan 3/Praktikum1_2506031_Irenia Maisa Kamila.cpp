// Nama: Irenia Maisa Kamia
// NIM: 2506031
// Kelas: 2B

#include <iostream>
#include <iomanip> // ngikut cara ahnaf
using namespace std;

struct elmahasiswa {
    string namaLengkap;
    int nim, angkatan;
    string prodi;
    float ipk;
    bool beasiswa;
};

void print (elmahasiswa & el) {
    cout << "\nNama Lengkap : " << el.namaLengkap << endl
         << "NIM          : " << el.nim << endl
         << "Angkatan     : " << el.angkatan << endl
         << "Prodi        : " << el.prodi << endl
         << "IPK          : " << el.ipk << endl
         << "Beasiswa     : " << (el.beasiswa ? "Ya" : "Tidak") << endl;
}

int main (){
    cout << fixed << setprecision(2); //biar ipk nya berkoma

    elmahasiswa reguler = {
        "Dimas Pratama",
        123456789,
        2020,
        "Teknik Informatika",
        3.75,
        true
    };
    print(reguler);

    elmahasiswa beasiswa = {
        "Irenia Maisa Kamila",
        2506031,
        2025,
        "Rekayasa Perangkat Lunak",
        4.00, //aamiin
        false
    };
    print(beasiswa);

    return 0;
}