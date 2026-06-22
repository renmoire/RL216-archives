// Nama: Irenia Maisa Kamila
// NIM: 2506031
// Kelas: 2B

#include <iostream>
using namespace std;

int x = 10;
int *px = &x;

void elfungsi () {
    int kursi = 10;
    int meja = 20;
    int *pointer;

    pointer = &kursi;

    cout << "Alamat dari pointer adalah " << pointer << endl;
    cout << "Isi alamat dari *pointer adalah " << *pointer << endl;
    cout << "Nilai dari kursi adalah " << kursi << endl;

    *pointer = meja;

    cout << "Alamat dari pointer adalah " << pointer << endl;
    cout << "Isi alamat dari *pointer adalah " << *pointer << endl;
    cout << "Nilai dari kursi adalah " << kursi << endl;
}

int main() {
    cout << "Nilai x: " << x << " | bertipe data " << typeid(x).name() << endl
         << "Alamat x: " << &x << " | bertipe data " << typeid(x).name() << endl
         << "Nilai px: " << px << " | bertipe data " << typeid(px).name() << endl // alamat x
         << "Nilai yang ditunjuk oleh px: " << *px << " | bertipe data " << typeid(*px).name() << endl;
}