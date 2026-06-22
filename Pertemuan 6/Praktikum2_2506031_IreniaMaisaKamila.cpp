// Nama: Irenia Maisa Kamila
// NIM: 2506031
// Kelas: 2B

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* buatNode(int nilai) {
    Node* nodeBaru = new Node();
    nodeBaru->data = nilai;
    nodeBaru->next = NULL;
    return nodeBaru;
}

void traversal(Node* head) {
    Node* current = head;
    cout << "Isi data node: ";
    while (current != NULL) {
        cout << current->data;
        if (current->next != NULL) cout << " -> ";
        current = current->next;
    }
    cout << " -> NULL" << endl;
}

int main() {
    Node* head = buatNode(2);
    head->next = buatNode(4);
    head->next->next = buatNode(6);
    head->next->next->next = buatNode(8);
    head->next->next->next->next = buatNode(10);

    traversal(head);

    Node* current = head;
    while (current != NULL) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}