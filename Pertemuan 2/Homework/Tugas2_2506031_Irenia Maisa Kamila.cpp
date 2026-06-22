//? Nama: Irenia Maisa Kamila
//? NIM: 2506031
//? Kelas: 2B

#include <iostream>
using namespace std;

//! Praktikum 2
void huruf() {
    string elhuruf[12] = {"c", "h", "a", "m", "p", "i", "o", "n", "s", "h", "i", "p"};
    int elmilih;

    cout << "\nOutput huruf pertama, kelima, dan terakhir: " << endl
         << elhuruf[0] << elhuruf[4] << elhuruf[11] << endl
         << "\nInput huruf (1-12) \n> ";

    while (cin >> elmilih && (elmilih < 1 || elmilih > 12)) {
        cout << "Input tidak valid!\n" << "\nInput huruf (1-12) \n> ";
    }

    cout << "Output: " << elhuruf[elmilih-1];
}

//! Praktikum 3
void angka() {
    int elangka[5];
    int eljumlah = 0;

    for (int elmilih = 0; elmilih < 5; elmilih++) {
        cout << "Input ke-" << elmilih + 1 << " > ";
        cin >> elangka[elmilih];
        eljumlah += elangka[elmilih];
    }

    cout << "\nOutput: ";
    for (int elmilih = 0; elmilih < 5; elmilih++) {
        cout << elangka[elmilih] << ", ";
    }

    float rata = (float) eljumlah / 5;
    cout << "Rata-rata = " << rata;
}

//! Praktikum 4
void matrix() {
    int A[2][2] = {{1, 2}, {3, 4}};
    int B[2][2] = {{1, 2}, {3, 4}};
    int C[2][2];

    for (int elbaris = 0; elbaris < 2; elbaris++) {
        for (int elkolom = 0; elkolom < 2; elkolom++) {
            C[elbaris][elkolom] = A[elbaris][elkolom] + B[elbaris][elkolom];
        }
    }

    cout << "Hasil C = A + B:\n";
    for (int elbaris = 0; elbaris < 2; elbaris++) {
        cout << "[ ";
        for (int elkolom = 0; elkolom < 2; elkolom++) {
            cout << C[elbaris][elkolom] << " ";
        }
            
    }
}

//! Praktikum 5
void array2x3() {
    int array[2][3];

    for (int elbaris = 0; elbaris < 2; elbaris++) {
        for (int elkolom = 0; elkolom < 3; elkolom++) {
            cout << "Masukan nilai array [" << elbaris << "][" << elkolom << "] > ";
            cin >> array[elbaris][elkolom];
        }
    }

    cout << "\nNilai array: \n";
    for (int elbaris = 0; elbaris < 2; elbaris++) {
        cout << "[ ";
        for (int elkolom = 0; elkolom < 3; elkolom++) {
            cout << array[elbaris][elkolom] << " ";
        }
        cout << "]" << endl;
    }
}

//! Praktikum 6
void elmatrix() {
    int elA[2][2];
    int elB[2][2];
    int elC[2][2];

    cout << "Input Matrix B:\n";
    for (int elbaris = 0; elbaris < 2; elbaris++) {
        for (int elkolom = 0; elkolom < 2; elkolom++) {
            cout << "elA[" << elbaris << "][" << elkolom << "] > ";
            cin >> elA[elbaris][elkolom];
        }
    }

    cout << "\nInput Matrix B:\n";
    for (int elbaris = 0; elbaris < 2; elbaris++) {
        for (int elkolom = 0; elkolom < 2; elkolom++) {
            cout << "elB[" << elbaris << "][" << elkolom << "] > ";
            cin >> elB[elbaris][elkolom];
        }
    }

    for (int elbaris = 0; elbaris < 2; elbaris++) {
        for (int elkolom = 0; elkolom < 2; elkolom++) {
            elC[elbaris][elkolom] = elA[elbaris][elkolom] + elB[elbaris][elkolom];
        }
    }

    cout << "\nHasil C = A + B:\n";
    for (int elbaris = 0; elbaris < 2; elbaris++) {
        cout << "[ ";
        for (int elkolom = 0; elkolom < 2; elkolom++) {
            cout << elC[elbaris][elkolom] << " ";
        }
        cout << "]" << endl;
    }
}

//! Praktikum 7
void elarrayMax() {
    int elarray[2][3];
    int elmaks;

    for (int elbaris = 0; elbaris < 2; elbaris++) {
        for (int elkolom = 0; elkolom < 3; elkolom++) {
            cout << "Masukan nilai elarray[" 
                 << elbaris << "][" 
                 << elkolom << "] > ";
            cin >> elarray[elbaris][elkolom];
        }
    }

    cout << "\nNilai array:\n";
    for (int elbaris = 0; elbaris < 2; elbaris++) {
        cout << "[ ";
        for (int elkolom = 0; elkolom < 3; elkolom++) {
            cout << elarray[elbaris][elkolom] << " ";
        }
        cout << "]" << endl;
    }

    elmaks = elarray[0][0];

    for (int elbaris = 0; elbaris < 2; elbaris++) {
        for (int elkolom = 0; elkolom < 3; elkolom++) {
            if (elarray[elbaris][elkolom] > elmaks) {
                elmaks = elarray[elbaris][elkolom];
            }
        }
    }

    cout << "\nNilai maksimal dari array adalah: " << elmaks << endl;
}


int main() {
    huruf();
    // angka();
    // matrix();
    // array2x3();
    // elmatrix();
    // elarrayMax();
    
    return 0;
}