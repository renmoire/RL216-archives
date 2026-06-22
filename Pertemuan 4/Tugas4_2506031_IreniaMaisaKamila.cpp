// Nama: Irenia Maisa Kamila
// NIM: 2506031
// Kelas

#include <iostream>
#include <algorithm>
using namespace std;

int main () {
    string kalimat;
    string reversedKalimat = "";
    int jumlahKata = 0;
    bool sebuahKata = false;

    cout << "\nMasukkan sebuah kata/kalimat\n> "; getline(cin, kalimat);
    if (kalimat.empty()) {
        cout << "\nNo input." << endl;
        return 0;
    }

    for (int index = 0; index < kalimat.length(); index++) {
        if (kalimat[index] != ' ' && sebuahKata == false) { 
            jumlahKata++;
            sebuahKata = true;

        } else if (kalimat[index] == ' ') { sebuahKata = false; } 
    }

    reverse(kalimat.begin(), kalimat.end());
    reversedKalimat = kalimat;

    cout << "\nJumlah kata      : " << jumlahKata << endl
         << "Reversed version : " << reversedKalimat << endl;
    return 0;
}


/* 
* -----------Algoritma-------------
* Deklarasi
kalimat: string
reversedKalimat: string
jumlahKata: integer
sebuahKata: boolean

* Deskripsi
READ kalimat

IF kalimat kosong THEN
    WRITE "No input"
ELSE

jumlahKata = 0
sebuahKata = FALSE

FOR setiap karakter dalam kalimat DO
    IF karakter != spasi AND sebuahKata = FALSE THEN
        jumlahKata = jumlahKata + 1
        sebuahKata = TRUE
    END IF

    IF karakter == spasi THEN
        sebuahKata = FALSE
    END IF
END FOR

Membalik kalimat

PRINT jumlahKata
PRINT kalimat yang sudah di-reverse

END IF
*/