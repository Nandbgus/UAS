#include <iostream>
#include <conio.h>
#define maxs 5
using namespace std;

struct stack
{
    char isi[maxs];
    int top;
};

void inits(stack &s);
void push(stack &s, char data);
void cetak(stack s);
void pop(stack &s, char &hasil);

int main()
{
    char huruf;
    stack s;
    inits(s);

    string nama, nim;
    cout << "PROGAM STACK" << endl;
    cout << "==========================" << endl;
    cout << "Nama: ";
    getline(cin >> ws, nama);
    cout << "NIM: ";
    getline(cin >> ws, nim);
    cout << "--------------------------" << endl;

    int choice;
    do
    {
        cout << "\nMenu" << endl;
        cout << "[1] Tambah Isi Stack" << endl;
        cout << "[2] Ambil Isi Stack" << endl;
        cout << "[3] Tampilkan Isi Stack" << endl;
        cout << "[0] Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> choice;

        cout << "PROGAM STACK" << endl;
        cout << "==========================" << endl;
        cout << "Nama: " << nama << endl;
        cout << "NIM: " << nim << endl;
        cout << "--------------------------" << endl;

        switch (choice)
        {
        case 1:
            cout << "Tambah Isi Stack" << endl;
            cout << "--------------------------" << endl;
            do
            {
                cout << "Masukkan Karakter: ";
                cin >> huruf;
                push(s, huruf);
                cout << "Tambah lagi? (Y/N): ";
                cin >> huruf;
            } while (huruf == 'Y' || huruf == 'y');
            break;
        case 2:
            cout << "Ambil Isi Stack" << endl;
            cout << "--------------------------" << endl;
            pop(s, huruf);
            cout << "Yang dihapus huruf: " << huruf << endl;
            break;
        case 3:
            cout << "Tampilkan Isi Stack" << endl;
            cout << "--------------------------" << endl;
            cetak(s);
            break;
        case 0:
            cout << "Keluar dari program." << endl;
            break;
        default:
            cout << "Pilihan tidak valid!" << endl;
        }
    } while (choice != 0);

    getch();
    return 0;
}

void inits(stack &s)
{
    s.top = 0;
}

void push(stack &s, char data)
{
    if (s.top < maxs)
    {
        s.top++;
        s.isi[s.top] = data;
    }
    else
    {
        cout << "Stack Penuh!" << endl;
    }
}

void cetak(stack s)
{
    cout << "Isi Stack: ";
    if (s.top != 0)
    {
        for (int i = 1; i <= s.top; i++)
        {
            cout << s.isi[i];
        }
    }
    else
    {
        cout << "Stack Kosong!" << endl;
    }
}

void pop(stack &s, char &hasil)
{
    if (s.top != 0)
    {
        hasil = s.isi[s.top];
        s.top--;
    }
    else
    {
        cout << "Stack Kosong!" << endl;
    }
}
