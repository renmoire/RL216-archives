// Nama: Irenia Maisa Kamila
// NIM: 2506031
// Kelas: 2B

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}  // constructor langsung
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    ~LinkedList() {  // destructor — bebas memory leak
        Node* current = head;
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
    }

    bool isEmpty() const {
        return head == nullptr;
    }

    void insertFirst(int nilai) {
        Node* new_node = new Node(nilai);
        new_node->next = head;
        head = new_node;
    }

    void insertLast(int nilai) {
        Node* new_node = new Node(nilai);
        if (isEmpty()) {
            head = new_node;
            return;
        }
        Node* current = head;
        while (current->next != nullptr)
            current = current->next;
        current->next = new_node;
    }

    void deleteFirst() {
        if (isEmpty()) {
            cout << "List kosong!" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void cetakList() const {
        if (isEmpty()) {
            cout << "Linked List kosong" << endl;
            return;
        }
        Node* current = head;
        while (current != nullptr) {
            cout << current->data;
            if (current->next != nullptr) cout << " -> ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList list;
    list.insertFirst(1);
    list.insertFirst(3);
    list.insertFirst(5);
    list.cetakList();   // 5 -> 3 -> 1

    list.insertLast(9);
    list.cetakList();   // 5 -> 3 -> 1 -> 9

    list.deleteFirst();
    list.cetakList();   // 3 -> 1 -> 9

    return 0;
}