// Nama: Irenia Maisa Kamila
// NIM: 2506031
// Kelas: 2B

#include <iostream>
#include <string>
using namespace std;

#define MAX 20

char stack[MAX];
int top = -1;

bool isFull() {
    return top == MAX - 1;
}

bool isEmpty() {
    return top == -1;
}

void push(char c) {
    if (isFull() == false) {
        stack[++top] = c;
    } else {
        cout << "Stack penuh!" << endl;
    }
}

char pop() {
    if (isEmpty() == false) {
        return stack[top--];
    } else {
        cout << "Stack kosong!" << endl;
    }
    return '\0';
}

int main() {
    string kalimat;
    cout << "Masukkan kalimat (max. 20 karakter): ";
    getline(cin, kalimat);

    if (kalimat.length() > 20) {
        cout << "Input melebihi 20 karakter!" << endl;
        return 1;
    }

    for (int i = 0; i < kalimat.length(); i++) {
        push(kalimat[i]);
    }

    cout << "\nKalimat terbalik: ";
    while (isEmpty() == false) {
        cout << pop();
    }
    cout << endl;

    return 0;
}