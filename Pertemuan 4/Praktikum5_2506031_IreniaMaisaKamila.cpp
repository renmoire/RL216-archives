// Nama: Irenia Maisa Kamila
// NIM: 2506031
// Kelas

#include <iostream>
using namespace std;

int main() {
    char lokasi[] = "Cibiru";
    char *pointer = lokasi;

    cout << "Value         : " << lokasi << endl
         << "Array[0]      : " << lokasi[0] << endl 
         << "Nilai Plokasi : " << *pointer << endl
         << "Pointer[2]    : " << pointer[2] << endl;

    pointer += 3;

    cout << "Pointer[2+3]  : " << pointer[2] << endl
         << "Pointer[2+3]  : " << pointer << endl;

    return 0;
}