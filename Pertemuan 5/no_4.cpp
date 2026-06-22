// Nama: Irenia Maisa Kamila
// NIM: 2506031
// Kelas: 2B

#include <iostream>
#include <algorithm>
using namespace std;

int main () {
    string namaLengkap, reversed = "";
    int jumlahKarakter = 0;
    bool stringorno = false;

    cout << "\nMNama lengkap:\n> "; getline(cin, namaLengkap);

    for (int index = 0; index < namaLengkap.length(); index++) {
        if (namaLengkap[index] != ' ' && stringorno == false) { 
            jumlahKarakter++;
            stringorno = true;

        } else if (namaLengkap[index] == ' ') { stringorno = false; } 
    }
    reverse(namaLengkap.begin(), namaLengkap.end());
    reversed = namaLengkap;

    cout << "Jumlah karakter : " << jumlahKarakter << endl
         << "Reversed        : " << reversed << endl;
         
    return 0;
}