// Nama: Irenia Maisa Kamila
// NIM: 2506031
// Kelas: 2B

#include <iostream>
using namespace std;

struct node{
    int data;
    node *next;
};

node *head;

bool isEmpty()
{
    return (head == NULL);
}

void insertFirst(int nilai)
{
    node *new_node = new node;
    new_node->data = nilai;

    if(isEmpty())
    {
        head = new_node;
        head->next = NULL;
    }
    else
    {
        new_node->next = head;
        head = new_node;
    }
}

void insertAfter(int key, int nilaiBaru) {
    node *current = head;

    while (current != NULL)
    {
        if (current->data == key)
        {
            node *new_node = new node;
            new_node->data = nilaiBaru;

            // inti insert after
            new_node->next = current->next;
            current->next = new_node;

            return;
        }
        current = current->next;
    }

    cout << "Data tidak ditemukan" << endl;
}

void cetakList()
{
    if(isEmpty())
    {
        cout << "Linked list kosong" << endl;
    }
    else
    {
        node *current = head;
        while(current != NULL)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
}

int main()
{
    head = NULL;

    insertFirst(10);
    insertFirst(8);
    insertFirst(6);
    insertFirst(4);
    insertFirst(2);

    cout << "Sebelum insert after: " << endl;
    cetakList();

    insertAfter(4, 5);

    cout << "Setelah insert after: " << endl;
    cetakList();

    return 0;
}