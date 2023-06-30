#include <iostream>
using namespace std;

struct kalender
{
    int tanggal;
    int bulan;
    int tahun;
};

void cetak(kalender temp)
{
    cout << temp.tanggal << "/" << temp.bulan << "/" << temp.tahun << endl;
}

int main()
{
    kalender sekarang;
    sekarang.tanggal = 13;
    sekarang.bulan = 10;
    sekarang.tahun = 2020;
    cetak(sekarang);

    system("pause");
    return 0;
}
