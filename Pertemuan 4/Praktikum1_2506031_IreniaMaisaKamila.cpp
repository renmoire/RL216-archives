// Nama: Irenia Maisa Kamila
// NIM: 2506031
// Kelas: 2B

#include <iostream>
#include <stdio.h>
using namespace std;

void elnyoba () {
    int x;
    int *p;
    
    cout << "Nilai > "; cin >> x; //? nilai 1
         p = &x;

    cout << "Nilai x: " << x << endl //? output1
         << "Alamat x: " << p << endl
         << "\n\n";

    cout << "Nilai x : "; cin >> x; //? nilai 2
         *p = x;

    cout << "Nilai x : " << *p << endl //? output 2
         << "Alamat x : " << p << endl;
}

int main (){
    elnyoba();
    return 0;
}