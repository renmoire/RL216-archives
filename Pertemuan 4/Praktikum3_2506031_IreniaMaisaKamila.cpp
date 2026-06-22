// Nama: Irenia Maisa Kamila
// NIM: 2506031
// Kelas: 2B

#include <iostream>
using namespace std;

int main() {
    int *a, *b;
    int x = 5, y = 10;

    cout << "-----------***-----------" << endl 
         << "Sebelum di SWAP" << endl
         << "Nilai  x : " << x << endl 
         << "Nilai  y : " << y << endl
         << "Alamat x : " << &x << endl
         << "Alamat y : " << &y << endl
         << "\n";

    cout << "-----------***-----------" << endl 
         << "Setelah di SWAP" << endl;
         swap(x, y); cout
         << "Nilai  x : " << x << endl
         << "Nilai  y : " << y << endl 
         << "Alamat x : " << &x << endl
         << "Alamat y : " << &y << endl;

    return 0;
}