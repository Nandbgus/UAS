#include <iostream>
using namespace std;

float hasil, a, air = 30;
string nama;

void tampil(string nm, float berat) {
    cout << "Nama : " << nm << endl;
    hasil = berat * air;
    cout << "Kebutuhan Air : " << hasil << " ml";
}

int main() {
    cout << "Masukkan Nama : ";
    cin >> nama;
    cout << "Masukkan Berat Badan : ";
    cin >> a;
    cout << endl;

    tampil(nama, a);

    return 0;
}
