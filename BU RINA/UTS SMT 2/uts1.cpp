#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> n;

    // Deklarasi array untuk menyimpan data mahasiswa
    string nim[n];
    float nilai[n][4]; // Array 2 dimensi untuk menyimpan nilai tugas, UTS, UAS, dan nilai akhir

    // INPUT DATA MAHASISWA
    for (int i = 0; i < n; i++) {
        cout << "Masukkan data mahasiswa ke-" << i + 1 << endl;
        cout << "NIM: ";
        cin >> nim[i];
        cout << "Nilai Tugas: ";
        cin >> nilai[i][0];
        cout << "Nilai UTS: ";
        cin >> nilai[i][1];
        cout << "Nilai UAS: ";
        cin >> nilai[i][2];

        // NILAI AKHIR
        nilai[i][3] = nilai[i][0] * 0.2 + nilai[i][1] * 0.25 + nilai[i][2] * 0.3;
    }

    // Tampilkan hasil perhitungan pada layar
    cout << "=====================================" << endl;
    cout << "No     NIM           TUGAS       UTS     UAS     Akhir" << endl;
    cout << "=====================================" << endl;
    for (int i = 0; i < n; i++) {
        cout << i + 1 <<"      " << nim[i] << "        "<< nilai[i][0]<<"     "<< nilai[i][1]<<"       "<< nilai[i][2]<<"     "<< nilai[i][3] << endl;
    }
    cout << "=====================================" << endl;

    return 0;
}