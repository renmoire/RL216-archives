#include <iostream>
using namespace std;

int main() {
    cout << "\n\n------ Kalkulator Pertambahan Simple ------\n\n";
    cout << "Masukan 3 angka" << endl;

    int a, b, c;

    cout << "Angka ke-1 > ";
    cin >> a;

    cout << "Angka ke-2 > ";
    cin >> b;

    cout << "Angka ke-3 > ";
    cin >> c;

    cout << "\nHasil:\n"
         << a << " + " << b << " + " << c
         << " = " << a + b + c << endl;

    return 0;
}