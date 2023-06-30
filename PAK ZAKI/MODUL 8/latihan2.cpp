#include <iostream>
using namespace std;

int hitung(string nm, int tlahir, int tsekarang) {
    cout << "Nama: " << nm << endl;
    int hasil = tsekarang - tlahir;
    cout << "Hasilnya adalah: " << hasil << endl;
    return hasil;
}

int main() {
    int a, b;
    string nama;

    cout << "Masukkan Nama: ";
    cin >> nama;
    cout << "Masukkan tahun lahir: ";
    cin >> a;
    cout << "Masukkan tahun sekarang: ";
    cin >> b;
    cout << endl;
    int hasil = hitung(nama, a, b);

    return 0;
}
