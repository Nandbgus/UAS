#include <iostream>
#include <conio.h>
using namespace std;

struct mahasiswa{
    char nim[10];
    char nama[20];
    char alamat[50];
    int umur;
};

int main(){
    mahasiswa mhs[3];

    for(int i=0; i<3; i++){
        cout << "NIM   : ";
        cin >> mhs[i].nim;
        cout << "Nama  : ";
        cin >> mhs[i].nama;
        cout << "Alamat: ";
        cin>>mhs[i].alamat;
        cout << "Umur  : ";
        cin >> mhs[i].umur;
    }

    for(int i=0; i<3; i++){
        cout << "NIM   : " << mhs[i].nim << endl;
        cout << "Nama  : " << mhs[i].nama << endl;
        cout << "Alamat: " << mhs[i].alamat << endl;
        cout << "Umur  : " << mhs[i].umur << endl;
    }

    getch();
    return 0;
}
