#include <iostream>
#include <conio.h>
using namespace std;

struct node {
    int data;
    node* prev;
    node* next;
};

node* head, *hapus, *insert, *cari;
int x;

//fungsi untuk menampilkan data linked list
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

    //pengisisan double linked list
    head = new node;
    head->data = 10;
    head->prev = NULL;
    head->next = new node;
    head->next->data = 20;
    head->next->prev = head;
    head->next->next = new node;
    head->next->next->data = 40;
    head->next->next->prev = head->next;
    head->next->next->next = NULL;

    cout << "Data Awal : ";
    tampil();

    //insert di awal node
    insert = new node;
    insert->data = 5;
    insert->next = head;
    insert->prev = NULL;
    head->prev = insert;
    head = insert;

    cout << "Data setelah insert di awal :";
    tampil();

    //insert setelah node terakhir
    node* tail;
    tail = head;
    insert = new node;
    insert->data = 80;
    insert->next = NULL;
    insert->prev = NULL;

    while (tail->next != NULL) {
        tail = tail->next;
    }
    tail->next = insert;
    insert->prev = tail;
    tail = insert;
    cout << "Data setelah insert diakhir : ";
    tampil();

    //insert sebelum node tertentu
    int nodeValue = 20;
    node* currentNode = head;
    while (currentNode != NULL) {
        if (currentNode->data == nodeValue) {
            insert = new node;
            insert->data = 15;
            insert->next = currentNode;
            insert->prev = currentNode->prev;
            currentNode->prev->next = insert;
            currentNode->prev = insert;
            break;
        }
        currentNode = currentNode->next;
    }
    cout << "Data setelah insert sebelum node tertentu : ";
    tampil();

    //insert setelah node tertentu
    nodeValue = 40;
    currentNode = head;
    while (currentNode != NULL) {
        if (currentNode->data == nodeValue) {
            insert = new node;
            insert->data = 45;
            insert->next = currentNode->next;
            insert->prev = currentNode;
            if (currentNode->next != NULL) {
                currentNode->next->prev = insert;
            }
            currentNode->next = insert;
            break;
        }
        currentNode = currentNode->next;
    }
    cout << "Data setelah insert setelah node tertentu : ";
    tampil();

    getch();
    return 0;
}
