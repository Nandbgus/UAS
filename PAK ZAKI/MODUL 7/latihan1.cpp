#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int hasil, air = 30;
    float berat;

    cout << "Masukkan berat badan : ";
    cin >> berat;

    ofstream inputfile("input.txt");

    if (!inputfile) {
        cout << "Gagal membuka file input.txt";
        return 1;
    }

    inputfile << "Berat badan anda : " << berat;
    inputfile << " Air = 30 Ml   ";
    inputfile.close();

    hasil = berat * air;

    ofstream outputfile("output.txt");
    if (!outputfile) {
        cout << "Gagal membuka output.txt";
        return 1;
    }

    outputfile << "Kebutuhan air orang dewasa" << endl;
    outputfile << "Berat " << berat << " * " << air << " = " << hasil << endl;
    outputfile << "Jadi kebutuhan air minum anda adalah : " << hasil << endl;
    outputfile.close();

    return 0;
}
