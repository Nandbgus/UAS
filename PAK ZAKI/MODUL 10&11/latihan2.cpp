#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string nama[2][3] = {{"Abadi Printing", "Sahabat", "Gacoan"},
                         {"Ayam Geperek 69", "Golden Cinema", "Kediri Mall"}};

    cout << "Menampilkan secara manual" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << setw(20) << "Nama 1" << setw(20) << "Nama 2" << setw(20) << "Nama 3" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << setw(20) << nama[0][0] << setw(20) << nama[0][1] << setw(20) << nama[0][2] << endl;
    cout << setw(20) << nama[1][0] << setw(20) << nama[1][1] << setw(20) << nama[1][2] << endl;
    cout << "-----------------------------------------------------------" << endl;

    cout << "Menampilkan dengan menggunakan for" << endl;
    cout << "-----------------------------------------------------------" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)  
        {
            cout << setw(20) << nama[i][j];
        }
        cout << endl;
    }
    cout << "-----------------------------------------------------------" << endl;

    return 0;
}
