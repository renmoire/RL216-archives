// Nama: Irenia Maisa Kamila
// NIM: 2506031
// Kelas: 2B

#include <iostream>
using namespace std;

int jumlahNode = 0;
const int maxNode = 10;

struct tree {
    int data;
    tree *left, *right;
};

tree *pohon;

void deklarasi() {
    pohon = NULL;
}

void insertTree(tree **pohon, int nilai) {
    if (*pohon == NULL) {
        tree *new_node = new tree;
        new_node->data = nilai;
        new_node->left = NULL;
        new_node->right = NULL;

        *pohon = new_node;
        cout << "Data " << nilai << " ditambahkan" << endl;
    } else if (nilai < (*pohon)->data) {
        insertTree(&(*pohon)->left, nilai);
    } else {
        insertTree(&(*pohon)->right, nilai);
    }
}

void preOrder(tree *pohon) {
    if (pohon != NULL) {
        cout << pohon->data << ", ";
        preOrder(pohon->left);
        preOrder(pohon->right);
    }
}

void inOrder(tree *pohon) {
    if (pohon != NULL) {
        inOrder(pohon->left);
        cout << pohon->data << ", ";
        inOrder(pohon->right);
    }
}

void postOrder(tree *pohon) {
    if (pohon != NULL) {
        inOrder(pohon->left);
        inOrder(pohon->right);
        cout << pohon->data << ", ";
    }
}

void findTree(tree *pohon, int cari) {
    int level = 0;
    while (pohon  != NULL) {
        if (pohon ->data == cari) {
            cout << "Data " << cari << " ditemukan pada level" << level << endl;
            return;

        } if (cari < pohon->data) {
            pohon = pohon->left;

        } else {
            pohon = pohon->right;
        }
        level++;
    }
    cout << "Data " << cari << " tidak ditemukan" << endl;
}

void deleteTree() {
    pohon = NULL;
    cout << "Berhasil dihapus" << endl;
}

int main() {
    deklarasi();
    int pilihan, nilai;

    do {
        cout << "\n# MENU -------------------------" << endl;
        cout << "1. Input data ke dalam tree" << endl;
        cout << "2. PreOrder traversal" << endl;
        cout << "3. InOrder traversal" << endl;
        cout << "4. PostOrder traversal" << endl;
        cout << "5. Cari data" << endl;
        cout << "6. Hapus seluruh node" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;

        if (pilihan == 1) {
            if (jumlahNode >= maxNode) {
                cout << "Tree sudah penuh! Maksimal " << maxNode << " node." << endl;
            } else {
                cout << "Masukkan nilai: ";
                cin >> nilai;
                insertTree(&pohon, nilai);
                jumlahNode++;
            }
        } else if (pilihan == 2) {
            cout << "\nPreOrder:\n";
            preOrder(pohon);
            cout << endl;
        } else if (pilihan == 3) {
            cout << "\nInOrder:\n";
            inOrder(pohon);
            cout << endl;
        } else if (pilihan == 4) {
            cout << "\nPostOrder:\n";
            postOrder(pohon);
            cout << endl;
        } else if (pilihan == 5) {
            cout << "Masukkan data yang dicari: ";
            cin >> nilai;
            findTree(pohon, nilai);
        } else if (pilihan == 6) {
            deleteTree();
        } else if (pilihan == 0) {
            cout << "Keluar dari program." << endl;
        } else {
            cout << "Pilihan tidak valid!" << endl;
        }

    } while (pilihan != 0);

    return 0;
}