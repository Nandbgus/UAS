#include <iostream>
using namespace std;

int main() {
    int nilai[10];
    int n = 10;
    int bil;
    

    cout << "Masukkan data array: ";
    for (int i = 0; i < n; i++) {
        cin >> nilai[i];
    }

    cout << "Masukkan bilangan yang ingin dicari: ";
    cin >> bil;

    cout << "Data array: ";
    for (int i = 0; i < n; i++) {
        cout << nilai[i] << " ";
    }
    cout << endl;

    // Proses pengurutan
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (nilai[j] > nilai[j + 1]) {
                int temp = nilai[j];
                nilai[j] = nilai[j + 1];
                nilai[j + 1] = temp;
            }
        }
    }

    // Menampilkan data terurut
    cout << "Data terurut: ";
    for (int i = 0; i < n; i++) {
        cout << nilai[i] << " ";
    }
    cout << endl;

    // Pencarian data
    int awal = 0;
    int akhir = n - 1;
    int tengah;
    bool found = false;

    while (awal <= akhir) {
        tengah = (awal + akhir) / 2;

        if (nilai[tengah] == bil) {
            found = true;
            break;
        } else if (nilai[tengah] < bil) {
            awal = tengah + 1;
        } else {
            akhir = tengah - 1;
        }
    }

    if (found) {
        cout << "Bilangan " << bil << " Ditemukan pada posisi " << tengah << endl;
    } else {
        cout << "Bilangan " << bil << " Tidak Ditemukan" << endl;
    }

    return 0;
}
