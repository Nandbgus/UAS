#include <iostream>
using namespace std;

struct Penjualan {
    string nama_barang;
    int jumlah , harga , subtotal;
};

int main() {
    Penjualan p[100];
    int n = 0, total = 0;
    char lanjut;

    do {
        cout << "Nama Barang: ";
        cin >> p[n].nama_barang;
        cout << "Jumlah: ";
        cin >> p[n].jumlah;
        cout << "Harga Satuan: ";
        cin >> p[n].harga;

        p[n].subtotal = p[n].jumlah * p[n].harga;
        total += p[n].subtotal;
        n++;

        cout << "Ingin memasukkan lagi? (Y/N): ";
        cin >> lanjut;
    } while (lanjut == 'Y' || lanjut == 'y');

    
    cout << "Nama Barang | Jml | Harga | Subtotal"<<endl;
    cout << "====================================="<<endl;
    for (int i = 0; i < n; i++) {
        cout << p[i].nama_barang <<"          "<< p[i].jumlah << "       " << p[i].harga << "        " << p[i].subtotal << endl;
    }
    cout << "-------------------------------------"<<endl;
    cout << "TOTAL                                " << total << endl;

    return 0;
}