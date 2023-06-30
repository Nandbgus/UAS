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

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (nilai[i] == bil) {
            found = 1;
            break;
        }
    }

    if (found == 1) {
        cout << "Bilangan " << bil << " Ditemukan";
    } else {
        cout << "Bilangan " << bil << " Tidak Ditemukan";
    }

    return 0;
}
