// Nama: Irenia Maisa Kamila
// NIM: 2506031
// Kelas: 2B

#include <iostream>
using namespace std;

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