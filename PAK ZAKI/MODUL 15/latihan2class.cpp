#include <iostream>
#include <string>
using namespace std;

class Laptop {
private:
    string merk;
    int tahun;

public:
    Laptop(string m, int t) {
        merk = m;
        tahun = t;
    }

    void display() {
        cout << "Merk: " << merk << endl;
        cout << "Tahun: " << tahun << endl;
    }
};

int main() {
    Laptop laptop1("HP", 2022);
    Laptop laptop2("Dell", 2021);

    cout << "Laptop 1:" << endl;
    laptop1.display();

    cout << endl;

    cout << "Laptop 2:" << endl;
    laptop2.display();

    return 0;
}
