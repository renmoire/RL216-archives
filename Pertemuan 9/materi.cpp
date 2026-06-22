#include <iostream>
using namespace std;

#define MAX 5

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
        return 1; // kosong
    else
        return 0; // tidak kosong
}

int isFull() {
    if (stack.top >= MAX)
        return 1; // penuh
    else
        return 0; // tidak penuh
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
    if (isEmpty() == 0) // tidak kosong
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
    if (isEmpty() == 0) // tidak kosong
    {
        cout << "Menampilkan isi stack: " << endl;
        for (int i = stack.top - 1; i >= 0; i--) // fix: mulai dari top-1
        {
            cout << "Data index stack ke-" << i << " adalah " << stack.temp[i] << endl;
        }
        cout << endl;
    }
    else {
        cout << "Maaf, tidak ada data pada stack" << endl;
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


int main()
{
    createStack();

    push(10);
    push(20);
    push(30);

    displayStack();

    find(20);
    find(50);

    pop();
    pop();

    displayStack();

    clearStack();

    displayStack();

    return 0;
}


int main() {
    stack.top = 0;
    int pilihan, data;

    do {
        cout << "=== MENU STACK ===" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Display" << endl;
        cout << "4. Clear Stack" << endl;
        cout << "5. Find" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan data: ";
                cin >> data;
                push(data);
                break;
            case 2:
                pop();
                break;
            case 3:
                displayStack();
                break;
            case 4:
                clearStack();
                break;
            case 5:
                cout << "Masukkan data yang ingin dicari: ";
                cin >> data;
                find(data);
                break;
            case 0:
                cout << "Keluar dari program." << endl;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
        }
        cout << endl;
    } while (pilihan != 0);

    return 0;
}

