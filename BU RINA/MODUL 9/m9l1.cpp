#include <iostream>
#include <conio.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *head, *temp, *insert, *hapus, *cari;
int x, nilai;

void tampil()
{
    node *bantu;
    bantu = head;
    while (bantu != NULL)
    {
        cout << bantu->data << " ";
        bantu = bantu->next;
    }
    cout << endl;
}

void tambahSebelum(int nilai, int nilaiBaru)
{
    node *bantu = head;
    node *sebelum = NULL;
    insert = new node;
    insert->data = nilaiBaru;
    insert->next = NULL;

    while (bantu != NULL && bantu->data != nilai)
    {
        sebelum = bantu;
        bantu = bantu->next;
    }

    if (bantu == NULL)
    {
        cout << "Data tidak ditemukan" << endl;
        return;
    }

    insert->next = bantu;
    if (sebelum == NULL)
    {
        head = insert;
    }
    else
    {
        sebelum->next = insert;
    }
}

void tambahAkhir(int nilaiBaru)
{
    node *bantu = head;
    insert = new node;
    insert->data = nilaiBaru;
    insert->next = NULL;

    if (bantu == NULL)
    {
        head = insert;
        return;
    }

    while (bantu->next != NULL)
    {
        bantu = bantu->next;
    }

    bantu->next = insert;
}

void hapusAwal()
{
    hapus = head;
    head = hapus->next;
    hapus->next = NULL;
}

void nodeTertentu()
{
    cout << "Masukkaan nilai yang ingin dicari : ";
    cin >> nilai;
    // if (head == NULL || head->next == NULL || head->next->data == nilai)
    // {
    //     cout << "Tidak ada node sebelumnya yang dapat dihapus" << endl;
    //     return;
    // }

    node *cari = head->next;
    node *sebelum = head;
    node *hapusSebelum = NULL;
    node *hapus = NULL;

    while (cari != NULL && cari->data != nilai)
    {
        hapusSebelum = sebelum;
        hapus = cari;
        sebelum = cari;
        cari = cari->next;
    }

    if (cari == NULL)
    {
        cout << "Data tidak ditemukan atau tidak ada node sebelumnya yang dapat dihapus" << endl;
        return;
    }

    if (hapusSebelum == NULL)
    {
        head = cari;
    }
    else
    {
        hapusSebelum->next = cari;
    }

    hapus->next = NULL;
    delete hapus;
}

void nodeitu()
{
    cout << "Cari Nilai yang dihapus :";
    cin >> nilai;

    node *cari = head;
    node *temp = NULL;

    while (cari != NULL && cari->data != nilai)
    {
        temp = cari;
        cari = cari->next;
    }
    // Update the links to remove the node from the linked list
    temp->next = cari->next;
    delete cari;
}

void hapusAkhir()
{
    cari = head;
    if (cari->next == NULL)
    {
        head = NULL;
    }
    else
    {
        while (cari->next->next != NULL)
        {
            cari = cari->next;
        }
    }
    hapus = cari->next;
    cari->next = NULL;
    delete hapus;
}

int main()
{
    head = new node;
    head->data = 10;
    head->next = new node;
    head->next->data = 20;
    head->next->next = new node;
    head->next->next->data = 40;
    head->next->next->next = NULL;

    cout << "Data Awal : ";
    tampil();

    insert = new node;
    insert->data = 5;
    insert->next = head;
    head = insert;

    cout << "Data setelah insert di awal : ";
    tampil();

    x = 10;
    tambahSebelum(x, 35);

    cout << "Data setelah insert sebelum 10 : ";
    tampil();

    tambahAkhir(50);

    cout << "Data setelah insert di akhir : ";
    tampil();

    hapusAwal();

    cout << "Data setelah hapus : ";
    tampil();

    nodeTertentu();
    cout << "Data sebelum node yang dihapus menjadi : ";
    tampil();

    hapusAkhir();
    cout << "Data setelah delete node terakhir";
    tampil();

    nodeitu();
    cout << "Data Setelah hapus node cari : ";
    tampil();
    getch();
}
