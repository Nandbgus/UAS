#include <iostream>
using namespace std;

 int jumlahdata = 5;
 int hargacm = 1000;

void hitungLuas(float panjang[], float lebar[], float luas[]) {
    for (int i = 0; i < jumlahdata; i++) {
        luas[i] = panjang[i] * lebar[i];
    }
}

void hitungHarga(float luas[], float harga[]) {
    for (int i = 0; i < jumlahdata; i++) {
        harga[i] = luas[i] * hargacm;
    }
}

void tampilData(float data[]) {
    for (int i = 0; i < jumlahdata; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
}

int main() {
    float panjang[jumlahdata] = {13.5, 12, 14.5, 13, 12.5};
    float lebar[jumlahdata] = {6, 8, 7.5, 7, 8};
    float luas[jumlahdata];
    float harga[jumlahdata];

    cout << "Ukuran panjang bunga: ";
    tampilData(panjang);

    cout << "Ukuran lebar bunga: ";
    tampilData(lebar);

    hitungLuas(panjang, lebar, luas);
    cout << "Luas bunga: ";
    tampilData(luas);

    hitungHarga(luas, harga);
    cout << "Harga bunga (per cm2): ";
    tampilData(harga);

    return 0;
}
