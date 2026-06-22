#include <iostream>
using namespace std;

//! STACKS

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

// int main()
// {
//     createStack();

//     push(10);
//     push(20);
//     push(30);

//     displayStack();

//     find(20);
//     find(50);

//     pop();
//     pop();

//     displayStack();

//     clearStack();

//     displayStack();

//     return 0;
// }

int main() {
    stack.top = 0;
    int pilihan, data;

    do {
        cout << "MENU STACK" << endl;
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

//! Queue

const int ukuran = 5;

struct antrian {
    int top;
    string isi[ukuran];
} antrian;

void createQueue() {
    antrian.top = 0;
}

int isEmpty() {
    if (antrian.top == 0) {
        return 1;
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
    if (isFull() == 1) {
        cout << "Antrian sudah penuh" << endl;
    } else {
        antrian.isi[antrian.top] = data;
        cout << antrian.isi[antrian.top] << " masuk ke antrian" << endl;
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
        cout << pop << " keluar dari antrian" << endl;
    }
}

void displayQueue() {
    cout << "\n--------------- Antrian ---------------" << endl;
    if (!isEmpty()) {
        cout << "Jumlah antrian saat ini: " << antrian.top << endl;
        for (int i = 0; i < antrian.top; i++) {
            cout << "- " << antrian.isi[i] << endl;
        }
        cout << "---------------------------------------\n" << endl;
    } else {
        cout << "Belum ada antrian\n\n" << endl;
        cout << "---------------------------------------\n" << endl;
    }
}

void find() {
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        string cari;
        bool ditemukan = false;  // fix: harus diinisialisasi false dari awal
        cout << "Nama yang ingin dicari: ";
        cin >> cari;
        for (int i = 0; i < antrian.top; i++) {
            if (antrian.isi[i] == cari) {
                cout << cari << " ada dalam antrian ke-" << i + 1 << endl;
                ditemukan = true;
                break;
            }
        }
        if (!ditemukan) {
            cout << cari << " tidak ada dalam antrian" << endl;
        }
    }
}

int main() {
    createQueue();

    int pilihan;
    string nama;

    do {
        displayQueue();
        // cout << "\n-------------------------------------" << endl;
        cout << "1. Tambah antrian" << endl;
        cout << "2. Hapus antrian" << endl;
        cout << "3. Cari nama dalam antrian" << endl;
        cout << "\n[0] Keluar\n" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;

        if (pilihan == 1) {
            cout << "Nama: "; getline(cin, nama);
            insertQueue(nama);
        } else if (pilihan == 2) {
            deleteQueue();
        } else if (pilihan == 3) {
            find();
        } else if (pilihan == 0) {
            cout << "Keluar dari program." << endl;
            return 0;
        } else {
            cout << "Pilihan tidak valid!" << endl;
        }

    } while (pilihan != 0);

    return 0;
}

//! Tree

struct tree {
    int data;
    tree *kiri, *kanan;
};

tree *pohon; 

void deklarasi() {
    pohon = NULL;
}

void insertTree(tree **pohon, int nilai) {
    if (*pohon == NULL) {
        tree *node_baru = new tree;
        node_baru->data  = nilai;
        node_baru->kiri  = NULL;
        node_baru->kanan = NULL;
        *pohon = node_baru;
        cout << "Data " << nilai << " berhasil ditambahkan." << endl;
    } else if (nilai < (*pohon)->data) {
        insertTree(&(*pohon)->kiri, nilai);
    } else {
        insertTree(&(*pohon)->kanan, nilai);
    }
}

void preOrder(tree *pohon) {
    if (pohon != NULL) {
        cout << pohon->data << " ";
        preOrder(pohon->kiri);
        preOrder(pohon->kanan);
    }
}

void inOrder(tree *pohon) {
    if (pohon != NULL) {
        inOrder(pohon->kiri);
        cout << pohon->data << " ";
        inOrder(pohon->kanan);
    }
}

void postOrder(tree *pohon) {
    if (pohon != NULL) {
        postOrder(pohon->kiri);
        postOrder(pohon->kanan);
        cout << pohon->data << " ";
    }
}

int main() {
    deklarasi();

    insertTree(&pohon, 50);
    insertTree(&pohon, 17);
    insertTree(&pohon, 12);
    insertTree(&pohon, 23);
    insertTree(&pohon,  9);
    insertTree(&pohon, 14);
    insertTree(&pohon, 19);
    insertTree(&pohon, 72);
    insertTree(&pohon, 54);
    insertTree(&pohon, 70);
    insertTree(&pohon, 67);

    cout << "\nPreOrder: \n";
    preOrder(pohon);
    cout << endl;

    cout << "\nInOrder: \n";
    inOrder(pohon);
    cout << endl;

    cout << "\nPostOrder: \n";
    postOrder(pohon);
    cout << endl;

    return 0;
}

// #include <iostream>
// using namespace std;

// //! Tree

// struct tree {
//     string data;
//     tree *kiri, *kanan;
// };

// tree *pohon;

// void deklarasi() {
//     pohon = NULL;
// }

// void insertTree(tree **pohon, string nilai) {
//     if (*pohon == NULL) {
//         tree *node_baru = new tree;

//         node_baru->data  = nilai;
//         node_baru->kiri  = NULL;
//         node_baru->kanan = NULL;

//         *pohon = node_baru;
//     }
// }

// // PreOrder
// void preOrder(tree *pohon) {
//     if (pohon != NULL) {
//         cout << pohon->data << endl;

//         preOrder(pohon->kiri);
//         preOrder(pohon->kanan);
//     }
// }

// int main() {

//     deklarasi();

//     // Root
//     insertTree(&pohon, "Direktur");

//     // Level 1
//     insertTree(&pohon->kiri, "Manager IT");
//     insertTree(&pohon->kanan, "Manager HR");

//     // Level 2
//     insertTree(&pohon->kiri->kiri, "Backend");
//     insertTree(&pohon->kiri->kanan, "Frontend");

//     insertTree(&pohon->kanan->kiri, "Recruiter");
//     insertTree(&pohon->kanan->kanan, "Admin HR");

//     // Level 3
//     insertTree(&pohon->kiri->kiri->kiri, "Programmer 1");
//     insertTree(&pohon->kiri->kiri->kanan, "Programmer 2");

//     insertTree(&pohon->kiri->kanan->kiri, "UI Designer");
//     insertTree(&pohon->kiri->kanan->kanan, "UX Designer");

//     cout << "Struktur Organisasi:\n\n";

//     preOrder(pohon);

//     return 0;
// }
//                 Direktur
//                /         \
//        Manager IT      Manager HR
//         /      \        /       \
//    Backend   Frontend Recruiter Admin HR
//     /   \      /   \
// Prog1 Prog2 UI UX