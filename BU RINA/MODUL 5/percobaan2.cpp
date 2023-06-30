#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int nilai[10] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0};
    int i, n, j, bil, awal, akhir, tengah;
    n = 10;
    bil = 7;

    // Menampilkan data array
    cout << "Data array: ";
    for (i = 0; i < n; i++)
        cout << nilai[i] << " ";
    cout << endl;

    // Proses pengurutan
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (nilai[j] > nilai[j + 1]) {
                int temp = nilai[j];
                nilai[j] = nilai[j + 1];    
                nilai[j + 1] = temp;
            }
        }
    }

    // Menampilkan data terurut
    cout << "Data terurut: ";
    for (i = 0; i < n; i++)
        cout << nilai[i] << " ";
    cout << endl;

    // Pencarian data
    awal = 0;
    akhir = n - 1;
    do {
        tengah = (akhir + awal) / 2;
        if (bil < nilai[tengah])
            akhir = tengah - 1;
        else
            awal = tengah + 1;
    } while ((akhir >= awal) && (nilai[tengah] != bil));

    if (nilai[tengah] == bil) {
        cout << "Bilangan " << bil << " Ditemukan pada posisi " << tengah << endl;
    } else {
        cout << "Bilangan " << bil << " Tidak Ditemukan" << endl;
    }

    getch();
    return 0;
}
