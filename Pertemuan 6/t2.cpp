#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

int main()
{
    node *head = NULL;
    node *second = NULL;
    node *third = NULL;
    node *current = NULL;

    head = new node();
    second = new node();
    third = new node();

    head->data = 1;      
    head->next = second; 

    second->data = 2;
    second->next = third; 

    third->data = 3;    
    third->next = NULL;

    cout << head->data << endl;
    cout << second->data << endl;
    cout << third->data << endl;

    current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }

    delete head;
    delete second;
    delete third;

    return 0;
}