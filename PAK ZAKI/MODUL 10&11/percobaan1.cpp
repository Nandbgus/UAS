#include <iostream>
using namespace std;

int main()
{
    string nama[3] = {"Andi", "Budi", "Anggi"};

    cout << "Menampilkan secara manual" << endl;
    cout << "NAMA : " << nama[0] << endl;
    cout << "NAMA : " << nama[1] << endl;
    cout << "NAMA : " << nama[2] << endl;

    cout << "Menampilkan dengan menggunakan for" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "NAMA : " << nama[i] << endl;
    }

    system("pause");
    return 0;
}
