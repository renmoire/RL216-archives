// Nama: Irenia Maisa Kamila
// NIM: 2506031
// Kelas: 2B

#include <iostream>
using namespace std;

const int MAX = 10;

struct Stack {
    int temp[MAX];
    int top;
};

Stack stack;

void createStack()
{
    stack.top = 0;
}

int isEmpty() {
    if (stack.top == 0)
        return 1;
    else
        return 0;
}

int isFull() {
    if (stack.top >= MAX)
        return 1;
    else
        return 0;
}

void push(int data) {
    if (isFull() == 1) {
        cout << "Maaf, stack sudah penuh" << endl;
    } else {
        stack.temp[stack.top] = data;
        stack.top++;
        cout << "Data berhasil dimasukkan ke stack" << endl;
    }
}

void pop() {
    if (isEmpty() == 0)
    {
        stack.top--;
        cout << "Data sudah berhasil dikeluarkan dari stack" << endl;
    }
    else
    {
        cout << "Maaf, stack kosong" << endl;
    }
}

void displayStack() {
    cout << "\nData saat ini:" << endl;
    if (isEmpty() == 0)
    {
        for (int i = stack.top - 1; i >= 0; i--)
        {
            cout << "Data index stack ke-" << i << " adalah " << stack.temp[i] << endl;
        }
        cout << endl;
    }
    else {
        cout << "(none)" << endl;
    }
}

void clearStack() {
    stack.top = 0;
    cout << "Stack sudah dikosongkan" << endl;
}

void find(int data) {
    if (isEmpty() == 1) {
        cout << "Maaf, stack kosong" << endl;
        return;
    }

    bool ketemu = false;
    for (int i = stack.top - 1; i >= 0; i--)
    {
        if (stack.temp[i] == data)
        {
            cout << "Data " << data << " ditemukan pada index ke-" << i << endl;
            ketemu = true;
            break;
        }
    }

    if (!ketemu)
    {
        cout << "Data " << data << " tidak ditemukan di dalam stack" << endl;
    }
}

int main() {
    stack.top = 0;
    int pilihan, data;

    
    do {
        cout << "\n-----------------------------\n" << endl;
        displayStack();
        cout << "\n---------- OPERASI ----------\n" << endl
             << "1. Push" << endl
             << "2. Pop" << endl
             << "3. Clear Stack" << endl
             << "4. Find\n" << endl
             << "[0] Hentikan program" << endl
             << "\n-----------------------------\n" << endl
             << "Pilihan > \n"; cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "\n-----------------------------\n" << endl
                     << "\nInput data > \n"; cin >> data;
                push(data);
                break;
            case 2:
                pop();
                break;
            case 3:
                clearStack();
                break;
            case 4:
                cout << "Data yang ingin dicari\n> \n"; cin >> data;
                find(data);
                break;
            case 13:
                cout << "Keluar dari program." << endl;
                break;
            default:
                cout << "\nPilihan tidak valid." << endl;
        }
        cout << endl;
    } while (pilihan != 0);

    return 0;
}