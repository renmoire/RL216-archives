#include <iostream>
#include <algorithm>
using namespace std;

void metriks () {
    int mtr [2][2] = {{5,7}, {9, 1}};
    int mtr2 [2][2] = {{10,3}, {7, 6}};

    for (int index = 0; index < 2; index++) {
        for (int index1 = 0; index1 < 2; index1++) {
            cout << mtr [index][index1] + mtr2 [index][index1] << " ";
            
        }
        cout << endl;
    }
}


void elsawit () {
    int arr[7], max, min;
    float avg = 0;

    for (int index = 0; index < 7; index++) {
        cout << "Angka ke-" << index + 1 << ": "; cin >> arr[index];

        if (index == 0) {
            max = arr[index];
            min = arr[index];

        } else {
            if (arr[index] > max) {
                max = arr[index];
            }
            if (arr[index] < min) {
                min = arr[index];
            }
            avg += arr[index];
        }
    }

    avg /= 7;

    cout << "Nilai terbesar : " << max << endl;
    cout << "Nilai terkecil : " << min << endl;
    cout << "Rata-rata      : " << avg << endl;
}

void elarray () {
    string arr, reversedArr = "";
    bool angka = false;

    for (int index = 0; index < 5; index++) {
        cout << "Angka ke-" << index + 1 << ": " << endl; getline(cin, arr);
        // if (arr.empty()) {
        //     cout << "\nNo input." << endl;
        //     return;
        // }
        
        for (int index = 0; index < 6; index++) {
            if (arr[index] != ' ' && angka == false) {
                angka = true;
        
             } else if (arr[index] == ' ') { angka = false; }
        }
    }

    reverse(arr.begin(), arr.end());
    reversedArr = arr;

    cout << "Reversed version: " << reversedArr << endl;
}

void foin1 () {
    int angka = 10;
    int *foibter = &angka;

    cout << "Nilai variabel angka: " << angka << endl
         << "Alamat variable angka: " << &angka << endl
         << "Nilai yang ditunjuk pointer: " << *foibter << endl
         << "Alamat pointer itu sendiri: " << &foibter << endl;
}


void foin2 () {
    int arr[1];

    cout << "Input 1 angka: "; cin >>arr[0];

    int *foint = &arr[0];
    int hasil = *foint * 2;

    cout << "Hasil: " << hasil << endl;
}


int main () {
    // elsawit ();
    // elarray();
    foin2();


    return 0;
}