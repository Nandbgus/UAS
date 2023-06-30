#include <iostream>
#include <string>
using namespace std;

struct Laptop {
    string merk;
    int tahun;
};

int main() {
    Laptop laptop1;
    laptop1.merk = "HP";
    laptop1.tahun = 2022;

    Laptop laptop2;
    laptop2.merk = "Dell";
    laptop2.tahun = 2021;

    cout << "Laptop 1:" << endl;
    cout << "Merk: " << laptop1.merk << endl;
    cout << "Tahun: " << laptop1.tahun << endl;

    cout << endl;

    cout << "Laptop 2:" << endl;
    cout << "Merk: " << laptop2.merk << endl;
    cout << "Tahun: " << laptop2.tahun << endl;

    return 0;
}
