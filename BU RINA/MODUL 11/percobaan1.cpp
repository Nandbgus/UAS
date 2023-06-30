//percobaan 1 modul 11 SD

#include <iostream>
#include <conio.h>
using namespace std;

struct node {
    int data;
    node* prev;
    node* next;
};

node* head, * hapus, * insert, * cari;
int x;

//fungsi untuk menampilkan data linked list
void tampil()
{
    node* bantu;
    bantu = head;
    while (bantu != NULL) {
        cout << bantu->data << " ";
        bantu = bantu->next;
    }
    cout << endl;
}

//fungsi untuk menginsert node sebelum node tertentu
void insertBefore(int titik, int newData)
{
    node* bantu = head;
    while (bantu != NULL) {
        if (bantu->data == titik) {
            insert = new node;
            insert->data = newData;
            insert->next = bantu;
            insert->prev = bantu->prev;
            if (bantu->prev != NULL)
                bantu->prev->next = insert;
            else
                head = insert;
            bantu->prev = insert;
            return;
        }
        bantu = bantu->next;
    }
    cout << "Node dengan nilai " << titik << " tidak ditemukan." << endl;
}

//fungsi untuk menginsert node setelah node tertentu
void insertAfter(int titik, int newData)
{
    node* bantu = head;
    while (bantu != NULL) {
        if (bantu->data == titik) {
            insert = new node;
            insert->data = newData;
            insert->prev = bantu;
            insert->next = bantu->next;
            if (bantu->next != NULL)
                bantu->next->prev = insert;
            bantu->next = insert;
            return;
        }
        bantu = bantu->next;
    }
    cout << "Node dengan nilai " << titik << " tidak ditemukan." << endl;
}

//fungsi untuk menghapus node awal
void deleteFirst()
{
    if (head == NULL) {
        cout << "Linked list kosong. Tidak dapat menghapus node awal." << endl;
        return;
    }

    hapus = head;
    head = head->next;
    if (head != NULL)
        head->prev = NULL;
    delete hapus;
}

//fungsi untuk menghapus node setelah node tertentu
void deleteAfter(int titik)
{
    node* bantu = head;
    while (bantu != NULL) {
        if (bantu->data == titik) {
            hapus = bantu->next;
            if (hapus != NULL) {
                bantu->next = hapus->next;
                if (hapus->next != NULL)
                    hapus->next->prev = bantu;
                delete hapus;
                return;
            }
        }
        bantu = bantu->next;
    }
    cout << "Node dengan nilai " << titik << " tidak ditemukan." << endl;
}

//fungsi untuk menghapus node akhir
void deleteLast()
{
    if (head == NULL) {
        cout << "Linked list kosong. Tidak dapat menghapus node akhir." << endl;
        return;
    }

    node* tail = head;
    while (tail->next != NULL) {
        tail = tail->next;
    }
    hapus = tail;
    if (tail->prev != NULL)
        tail->prev->next = NULL;
    else
        head = NULL;
    delete hapus;
}

int main()
{
    //pengisian double linked list secara manual
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

    cout << "Data awal : ";
    tampil();

    //insert diawal node 
    insert = new node;
    insert->data = 5;
    insert->next = head;
    insert->prev = NULL;
    head->prev = insert;
    head = insert;

    cout << "Data setelah insert diawal : ";
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
    cout << "Data setelah insert di akhir : ";
    tampil();

    //insert sebelum node tertentu
    insertBefore(40, 30);
    cout << "Data setelah insert sebelum 40 : ";
    tampil();

    //insert setelah node tertentu
    insertAfter(20, 25);
    cout << "Data setelah insert setelah 20 : ";
    tampil();

//delete node awal
    deleteFirst();
    cout << "Data setelah delete node awal : ";
    tampil();

    //delete node setelah node tertentu
    deleteAfter(20);
    cout << "Data setelah delete node setelah 20 : ";
    tampil();

    //delete node akhir
    deleteLast();
    cout << "Data setelah delete node akhir : ";
    tampil();

    getch();
    return 0;
}