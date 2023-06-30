// latihan 1 modul 11

#include <iostream>

using namespace std;

struct node {
    int data;
    node *prev;
    node *next;
};

node *head, *hapus, *insert, *cari;
int x;

//Fungsi untuk menampilkan double linked list secara runtut maju & runtut mundur
void tampil(){
    node *bantu;
    bantu = head;
    
    while (bantu != NULL){
        cout << bantu->data << " ";
        bantu = bantu->next;
    }
    cout << endl;
}

int main (){
    // Pengisian double linked list secara manual
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
    
    // insert diawal node
    insert = new node;
    insert->data = 5;
    insert->next = head;
    insert->prev = NULL;
    head->prev = insert;
    head = insert;
    
    cout << "Data setelah insert diawal : ";
    tampil();
    
    // insert setelah node terakhir
    node *tail;
    tail = head;
    insert = new node;
    insert->data = 80;
    insert->next = NULL;
    insert->prev = NULL;
    
    while (tail->next != NULL){
        tail = tail->next;
    }
    
    tail->next = insert;
    insert->prev = tail;
    tail = insert;
    
    cout << "Data setelah insert diakhir : ";
    tampil();
    
    // insert sebelum node tertentu
    cari = head;
    while (cari != NULL){
        if (cari->data == 20){
            insert = new node;
            insert->data = 15;
            insert->next = cari;
            insert->prev = cari->prev;
            if (cari->prev != NULL){
                cari->prev->next = insert;
            }
            cari->prev = insert;
            if (cari == head){
                head = insert;
            }
            break;
        }
        cari = cari->next;
    }
    
    cout << "Data insert sebelum node tertentu : ";
    tampil();
    
    // insert setelah node tertentu
    cari = head;
    while (cari != NULL){
        if (cari->data == 40){
            insert = new node;
            insert->data = 50;
            insert->next = cari->next;
            insert->prev = cari;
    
            if (cari->next != NULL){
               cari->next->prev = insert;
            }
            cari->next = insert;
            break;
        }
        cari = cari->next;
    }
    
    cout << "Data insert setelah node tertentu : ";
    tampil();
    
    // --------------- OPERASI DELETE ---------------
    // delete diawal node
    hapus = head;
    head = head->next;
    head->prev = NULL;
    hapus->next = NULL;
    delete hapus;
    
    cout << "Data setelah delete node awal : ";
    tampil();
    
    // delete setelah node tertentu
    cout << "Masukkan data yang akan di cari : ";
    cin >> x;
    cari = head;
    while ((cari != NULL) && (cari->data != x)){
        cari = cari->next;
    }
    if (cari != NULL){
        if (cari->next == NULL){ // jika elemen selanjutnya adalah NULL
            cout << "Tidak ada elemen selanjutnya" << endl;
        }else if (cari->next->next == NULL){ // jika elemen selanjutnya adalah tail
            hapus = cari->next;
            cari->next = NULL;
            hapus->prev = NULL;
            delete hapus;
        }else{ // jika elemen selanjutnya bukan NULL
            hapus = cari->next;
            cari->next = hapus->next;
            hapus->next->prev = cari;
            hapus->next = NULL;
            hapus->prev = NULL;
            delete hapus;
        }
    }else{
        cout << "Data tidak ditemukan" << endl;
    }
cout << "Data setelah delete setelah node " << x << " : ";
    tampil();
    
    // delete node terakhir
    hapus = head;
    if (hapus->next == NULL){
        head = NULL;
        delete hapus;
    }else{
        while (hapus->next != NULL){
            hapus = hapus->next;
        }
    }
    hapus->prev->next = NULL;
    hapus->prev = NULL;
    delete hapus;
    
    cout << "Data setelah delete node terakhir : ";
    tampil();
    
    // delete node tertentu
    cout << "Masukkan data yang akan dihapus : ";
    cin >> x;
    cari = head;
    while ((cari != NULL) && (cari->data != x)) {
        cari = cari->next;
    }
    if (cari != NULL) {
        if (cari == head) { // jika node yang dihapus adalah head
            hapus = head;
            head = head->next;
            if (head != NULL) {
                head->prev = NULL;
            }
            hapus->next = NULL;
            delete hapus;
        }
else if (cari->next == NULL) { // jika node yang dihapus adalah tail
            hapus = cari;
            cari->prev->next = NULL;
            hapus->prev = NULL;
            delete hapus;
        }
        else { // jika node yang dihapus ada di tengah
            hapus = cari;
            cari->prev->next = cari->next;
            cari->next->prev = cari->prev;
            hapus->next = NULL;
            hapus->prev = NULL;
            delete hapus;
        }
    }
    else {
        cout << "Data tidak ditemukan" << endl;
    }

    cout << "Data setelah delete node " << x << " : ";
    tampil();
    return 0;
}