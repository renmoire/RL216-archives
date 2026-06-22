#include <iostream>
#include <malloc.h>

using namespace std;

// struct Node {
//     int data;
//     Node* next;
// };

// int main() {
//     // Buat 3 node secara manual
//     Node* head = new Node();  // node pertama
//     Node* kedua = new Node();
//     Node* ketiga = new Node();

//     // Isi data
//     head->data   = 10;
//     kedua->data  = 20;
//     ketiga->data = 30;

//     // Sambungkan antar node
//     head->next   = kedua;
//     kedua->next  = ketiga;
//     ketiga->next = NULL;  // tanda akhir list

//     // Cetak semua data
//     Node* current = head;
//     while (current != NULL) {
//         cout << current->data << " -> ";
//         current = current->next;
//     }
//     cout << "NULL" << endl;

//     return 0;
// }
// // Output: 10 -> 20 -> 30 -> NULL


using namespace std;

struct node{
    int bilangan;
    node *next;
};

int main(){
    struct node *head = NULL;
    head = (struct node*)malloc(sizeof(struct node));
    cout << head << endl;
}