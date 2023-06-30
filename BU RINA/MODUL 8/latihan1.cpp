#include <iostream>
#include <conio.h>
using namespace std;

struct node {
    int data;
    node* next;
};

node* head, * temp, * insert;
int x;

// fungsi untuk menampilkan data linked list
void tampil() {
    node* bantu;
    bantu = head;
    while (bantu != NULL) {
        cout << bantu->data << " ";
        bantu = bantu->next;
    }
    cout << endl;
}

int main() {
    // pengisian linked list secara manual
    head = new node;
    head->data = 10;
    head->next = new node;
    head->next->data = 20;
    head->next->next = new node;
    head->next->next->data = 40;
    head->next->next->next = NULL;

    cout << "Data Awal: ";
    tampil();

    // insert di awal mode
    insert = new node;
    insert->data = 5;
    insert->next = head;
    head = insert;

    cout << "Data setelah insert di awal: ";
    tampil();

    // insert setelah node tertentu (x)
    x = 10;
    insert = new node;
    insert->data = 35;
    insert->next = NULL;
    node* after;
    after = head;
    while (after->data != x) {
        after = after->next;
    }
    if (after->data == x) {
        insert->next = after->next;
        after->next = insert;
    }
    else {
        cout << "Data tidak ditemukan" << endl;
    }
    cout << "Data setelah insert setelah 10: ";
    tampil();

    // insert sebelum node tertentu (x)
    x = 20;
    insert = new node;
    insert->data = 15;
    insert->next = NULL;
    node* before = head;
    while (before->next->data != x) {
        before = before->next;
    }
    insert->next = before->next;
    before->next = insert;

    cout << "Data setelah insert sebelum 20: ";
    tampil();

    // insert node terakhir
    insert = new node;
    insert->data = 50;
    insert->next = NULL;
    node* last = head;
    while (last->next != NULL) {
        last = last->next;
    }
    last->next = insert;

    cout << "Data setelah insert node terakhir: ";
    tampil();

    getch();
}