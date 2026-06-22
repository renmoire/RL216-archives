// Nama: Irenia Maisa Kamila
// NIM: 2506031
// Kelas: 2B

#include <iostream>
using namespace std;

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
        cout << pohon->data << " ";
        preOrder(pohon->left);
        preOrder(pohon->right);
    }
}

void inOrder(tree *pohon) {
    if (pohon != NULL) {
        inOrder(pohon->left);
        cout << pohon->data << " ";
        inOrder(pohon->right);
    }
}

int main() {
    deklarasi();

    insertTree(&pohon,  10);
    insertTree(&pohon,  5);
    insertTree(&pohon, 1);
    insertTree(&pohon,  7);
    insertTree(&pohon,  9);

    cout << "Pre-order traversal: ";
    preOrder(pohon);

    cout << "\nIn-order traversal: ";
    inOrder(pohon);
}