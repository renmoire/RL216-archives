#include <iostream>
using namespace std;

const int ukuran = 5;
struct antrian {
    int top;
    string isi[ukuran];
} antrian;

void createQueue() {
    antrian.top = 0;
}

int isEmpty(){
    if (antrian.top == 0) {
        return 1; // return (antrian.top == 0) a.k.a true
    } else {
        return 0;
    }
}

int isFull() {
    if (antrian.top >= ukuran) {
        return 1;
    } else {
        return 0;
    }
}

void insertQueue(string data) {
    if (isFull() == 1) { // sama aja kayak isFull()
        cout << "\nAntrian sudah penuh" << endl;
    } else {
        antrian.isi[antrian.top] = data;
        cout<< "Data: " << antrian.isi[antrian.top] << " masuk ke antrian" << endl;
        antrian.top++;
    }
}

void deleteQueue() {
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        string pop = antrian.isi[0];
        for (int i = 1; i < antrian.top; i++) {
            antrian.isi[i - 1] = antrian.isi[i];
        }
        antrian.top--;
        
        cout << "Data: " << pop << " keluar dari antrian" << endl;
    }
}

void displayQueue() {
    if (!isEmpty()) {
        cout << "\n---------- Antrian ----------\n";
        for (int i = 0; i < antrian.top; i++) {
            cout << "- " << antrian.isi[i] << "\n"; 
        }
    } else {
        cout << "Antrian kosong" << endl;
    }
}

void find() {
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        string cari;
        bool ditemukan;
        cout << "Nama yang ingin dicari: "; cin>> cari;
        for (int i = 0; i < antrian.top; i++) {
            if (antrian.isi[i] == cari) {
                cout << "Ada dalam antrian ke-" << i + 1 << endl;
                ditemukan = true;
                break;
            }
        if (!ditemukan) {
            cout << "Tidak ada dalam antrian" << endl;
            break;
            ditemukan = false;
            }
        }
    }
}

int main() {
    createQueue();
    insertQueue("Abyan");
    insertQueue("Kresna");
    insertQueue("Atsiila");
    insertQueue("Lina");
    insertQueue("Ilham");

    insertQueue("Ilhama");

    displayQueue();
    
    deleteQueue();
    insertQueue("Acheron");

    displayQueue();
    find();
}
