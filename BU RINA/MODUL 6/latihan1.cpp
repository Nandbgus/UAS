#include <iostream>
#include <conio.h>
#define maxs 5

using namespace std;

struct stack {
    char isi[maxs];
    int top;
};

void inits(stack &s);
void push(stack &s, char data);
void cetak(stack s);
void pop(stack &s, char &hasil);

int main() {
    char huruf;
    stack s;
    int menu;

    cout << "PROGRAM STACK" << endl;
    cout << "==========================" << endl;
    cout << "Nama: " << endl;
    cout << "NIM: " << endl;
    cout << "--------------------------" << endl;

    inits(s);

    while (true) {
        cout << "Menu" << endl;
        cout << "[1] Tambah Isi Stack" << endl;
        cout << "[2] Ambil Isi Stack" << endl;
        cout << "[3] Tampilkan Isi Stack" << endl;
        cout << "Pilih menu: ";
        cin >> menu;

        switch (menu) {
            case 1:
                cout << "==========================" << endl;
                cout << "Tambah Isi Stack" << endl;
                cout << "--------------------------" << endl;
                cout << "Masukkan Karakter: ";
                cin >> huruf;
                push(s, huruf);
                break;
            case 2:
                cout << "==========================" << endl;
                cout << "Ambil Isi Stack" << endl;
                cout << "--------------------------" << endl;
                pop(s, huruf);
                cout << "Yang dihapus huruf: " << huruf << endl;
                break;
            case 3:
                cout << "==========================" << endl;
                cout << "Tampilkan Isi Stack" << endl;
                cout << "--------------------------" << endl;
                cetak(s);
                break;
            default:
                cout << "Menu tidak valid!" << endl;
        }

        cout << "Tambah lagi? (Y/N): ";
        char choice;
        cin >> choice;
        if (choice != 'Y' && choice != 'y') {
            break;
        }
    }

    getch();
    return 0;
}

void inits(stack &s) {
    s.top = 0;
}

void push(stack &s, char data) {
    if (s.top < maxs) {
        s.top++;
        s.isi[s.top] = data;
    } else {
        cout << "Stack Penuh!" << endl;
    }
}

void cetak(stack s) {
    int i;
    cout << "Isi Stack: ";
    if (s.top != 0) {
        for (i = 1; i <= s.top; i++) {
            cout << s.isi[i] << " ";
        }
    } else {
        cout << "Stack Kosong!" << endl;
    }
    cout << endl;
}

void pop(stack &s, char &hasil) {
    if (s.top != 0) {
        hasil = s.isi[s.top];
        s.top--;
    } else {
        cout << "Stack Kosong!" << endl;
    }
}
