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

void insertLast(int nilai)
{
    node *new_node = new node;
    new_node->data = nilai;
    new_node->next = NULL;

    if(isEmpty())
    {
        head = new_node;
        head->next = NULL;
    }
    else
    {
        node *current = head;
        while(current->next != NULL)
        {
            current = current->next;
        }
        current->next = new_node;
    }
}

void removeFirst()
{
    if(isEmpty())
    {
        cout << "List kosong" << endl;
        return;
    }

    node *temp = head;        // simpan node pertama
    head = head->next;        // pindahkan head ke node berikutnya
    delete temp;              // hapus node pertama yang lama
}

void cetakList()
{
    if(isEmpty())
    {
        cout << "Linked List kosong" << endl;
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

int main(){
    head = NULL;

    insertLast(1);
    insertLast(3);
    insertLast(5);
    insertLast(7);

    cout << "Sebelum remove first:" << endl;
    cetakList();

    removeFirst();

    cout << "Setelah remove first:" << endl;
    cetakList();

    return 0;
}