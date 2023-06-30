
#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
};

node *head, *insert, *hapus, *cari, *before;
int x;

void tampil() {
    node *bantu;
    bantu = head;
    while (bantu != NULL) {
        cout << bantu->data << " ";
        bantu = bantu->next;
    }
    cout << endl;
}

int main() {
    // pengisian single linked list secara manual
    head = new node;
    head->data = 10;
    head->next = new node;
    head->next->data = 40;
    head->next->next = NULL;

    cout << "Data Awal: ";
    tampil();

    // insert di awal
    insert = new node;
    insert->data = 5;
    insert->next = head;
    head = insert;
    cout << "Data setelah insert di awal: ";
    tampil();

    // insert sebelum node tertentu
    x = 10;
    insert = new node;
    insert->data = 35;
    insert->next = NULL;
    node *after = head;
    node *before = NULL;

    while (after != NULL && after->data != x) {
        before = after;
        after = after->next;
    }

    if (after != NULL) {
        insert->next = after;
        if (before != NULL) {
            before->next = insert;
        } else {
            head = insert;
        }
    } else {
        cout << "Data tidak ditemukan" << endl;
    }
    cout << "Data setelah insert sebelum " << x << ": ";
    tampil();

    // delete node awal
    hapus = head;
    head = head->next;
    hapus->next = NULL;
    delete hapus;
    cout << "Data setelah delete node awal: ";
    tampil();

    // delete setelah node tertentu
    cout << "Masukkan data yang akan dicari: ";
    cin >> x;
    cari = head;
    while (cari != NULL && cari->data != x) {
        cari = cari->next;
    }
    if (cari != NULL) {
        hapus = cari->next;
        if (hapus != NULL) {
            cari->next = hapus->next;
            hapus->next = NULL;
            delete hapus;
        } else {
            cout << "Tidak ada elemen selanjutnya" << endl;
        }
    } else {
        cout << "Data tidak ditemukan" << endl;
    }
    cout << "Data setelah delete setelah " << x << ": ";
    tampil();

    // delete node sebelum node tertentu
    cout << "Masukkan data yang akan dicari: ";
    cin >> x;
    cari = head;
    before = NULL;
    while (cari != NULL && cari->data != x) {
        before = cari;
        cari = cari->next;
    }
    if (cari != NULL && before != NULL) {
        hapus = before->next;
        before->next = hapus->next;
        hapus->next = NULL;
        delete hapus;
    } else {
        cout << "Data tidak ditemukan" << endl;
    }
    cout << "Data setelah delete node sebelum " << x << ": ";
    tampil();

    // delete node terakhir
    cari = head;
    if (cari->next == NULL) {
        head = NULL;
        delete cari;
    } else {
        while (cari->next->next != NULL) {
            cari = cari->next;
        }
        hapus = cari->next;
        cari->next = NULL;
        delete hapus;
    }
    cout << "Data setelah delete node terakhir: ";
    tampil();

    return 0;
}
