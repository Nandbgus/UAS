#include <iostream>
#include <conio.h>

using namespace std;

struct node{
    int data;
    node *next;
};

node *head, *temp, *insert;
int x;

//fungsi untuk menampilkan data linked list
void tampil(){
    
    node *bantu;
    bantu = head;
    while(bantu != NULL)
    {
        cout<<bantu->data<<" ";
        bantu=bantu->next;
    }
    cout<<endl;
}

int main ()
{
    //pengisian single linked list secara manual

    head = new node;
    head->data=10;
    head->next = new node;
    head -> next -> data = 20;
    head -> next -> next = new node;
    head -> next -> next -> data = 40;
    head -> next -> next -> next = NULL;

    cout<<"Data awal : ";
    tampil();


//insert setelah node tertentu (x)

    x = 10;
    insert = new node;
    insert -> data = 35;
    insert -> next = NULL;
    node *after;
    after = head;
    while(after -> data != x)
    {
        after = after -> next;
    }
    if(after -> data == x)
    {
        insert -> next=after -> next;
        after -> next = insert;
    }
    else
    {
        cout<<"Data tidak ditemukan"<<endl;
    }
    cout<<"Data setelah insert setelah 10 : ";
    tampil();

    getch();
}