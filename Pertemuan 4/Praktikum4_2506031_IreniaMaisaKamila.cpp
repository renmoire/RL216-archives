// Nama: Irenia Maisa Kamila
// NIM: 2506031
// Kelas: 2B

#include <iostream>
using namespace std;

int main () {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    cout << "\n\nElemen array menggunakan pointer: " << endl;
    for (int index = 0; index < 5; index++) {
        cout << *(ptr + index) << " | " << (ptr + index) << "\n";
    }
    
    return 0;
}
