// hatihan 1 modul 9 SD 

#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

node* head, * hapus, * insert, * cari;
int x;

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
    head = new node;
    head->data = 10;
    head->next = new node;
    head->next->data = 20;
    head->next->next = new node;
    head->next->next->next = NULL;

    cout << "data awal: ";
    tampil();

    insert = new node;
    insert->data = 5;
    insert->next = head;
    head = insert;

    cout << "data setelah insert di awal: ";
    tampil();
    x = 10;
    insert = new node;
    insert->data = 35;
    insert->next = NULL;
    node* after = head;

    while (after != NULL && after->data != x) {
        after = after->next;
    }
    if (after != NULL) {
        insert->next = after->next;
        after->next = insert;
    }
    else {
        cout << "data tidak ditemukan" << endl;
    }
    cout << "setelah insert adalah 10: ";
    tampil();

    hapus = head;
    head = head->next;
    hapus->next = NULL;
    delete hapus;
    cout << "data setelah delete node awal: ";
    tampil();

    cout << "Masukkan data yang akan dicari: ";
    cin >> x;
    cari = head;
    node* before = NULL;
    while (cari != NULL && cari->data != x) {
        before = cari;
        cari = cari->next;
    }
    if (cari != NULL) {
        if (before == NULL) {
            hapus = head;
            head = head->next;
            hapus->next = NULL;
            delete hapus;
        }
        else {
            hapus = before->next;
            before->next = hapus->next;
            hapus->next = NULL;
            delete hapus;
        }
    }
    else {
        cout << "data tidak ditemukan" << endl;
    }
    cout << "data setelah delete node sebelum " << x << ": ";
    tampil();

    cari = head;
    if (cari->next == NULL) {
        head = NULL;
    }
    else {
        while (cari->next->next != NULL) {  
            cari = cari->next;
        }
        hapus = cari->next;
        cari->next = NULL;
        delete hapus;
    }

    cout << "data setelah delete node terakhir: ";
    tampil();

    return 0;
}