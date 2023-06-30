#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama;
    int usia;
    string alamat;
    string telepon;
};

int main() {
    Mahasiswa mhs;

    cout << "Masukkan data mahasiswa:" << endl;
    cout << "Nama: ";
    getline(cin, mhs.nama);
    cout << "Usia: ";
    cin >> mhs.usia;
    cin.ignore(); // Menggunakan cin.ignore() untuk membersihkan \n yang tersisa setelah memasukkan usia
    cout << "Alamat: ";
    getline(cin, mhs.alamat);
    cout << "Nomor Telepon: ";
    getline(cin, mhs.telepon);

    cout << "\nData mahasiswa:" << endl;
    cout << "Nama: " << mhs.nama << endl;
    cout << "Usia: " << mhs.usia << endl;
    cout << "Alamat: " << mhs.alamat << endl;
    cout << "Nomor Telepon: " << mhs.telepon << endl;

    return 0;
}
