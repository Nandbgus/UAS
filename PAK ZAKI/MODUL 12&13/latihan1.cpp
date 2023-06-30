#include <iostream>
using namespace std;

struct mahasiswa {
    string nama;
    int usia;
    float ipk;
    string hobi[2];
};

int main() {
    mahasiswa mhs[2];

    mhs[0].nama = "Andi";
    mhs[0].usia = 21;
    mhs[0].ipk = 3.5;
    mhs[0].hobi[0] = "Renang";
    mhs[0].hobi[1] = "Futsal";

    mhs[1].nama = "Budi";
    mhs[1].usia = 20;
    mhs[1].ipk = 3.7;
    mhs[1].hobi[0] = "Membaca";
    mhs[1].hobi[1] = "Badminton";

    cout << "Data mahasiswa indeks ke-0:" << endl;
    cout << "Nama: " << mhs[0].nama << endl;
    cout << "Usia: " << mhs[0].usia << endl;
    cout << "IPK: " << mhs[0].ipk << endl;
    cout << "Hobi: " << mhs[0].hobi[0] << ", " << mhs[0].hobi[1] << endl;

    cout << "Data mahasiswa indeks ke-1:" << endl;
    cout << "Nama: " << mhs[1].nama << endl;
    cout << "Usia: " << mhs[1].usia << endl;
    cout << "IPK: " << mhs[1].ipk << endl;
    cout << "Hobi: " << mhs[1].hobi[0] << ", " << mhs[1].hobi[1] << endl;

    system("pause");
    return 0;
}
