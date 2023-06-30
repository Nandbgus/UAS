#include <iostream>

using namespace std;

class kalender {
    public :
        int tanggal;
        int bulan ;
        int tahun;
        void cetak(){
            cout<<tanggal<<"/"<<bulan<<"/"<<tahun<<endl;
        }
        
};

int main (){
    kalender sekarang;
    sekarang.tanggal = 13;
    sekarang.bulan = 10;
    sekarang.tahun = 2020;
    sekarang.cetak();

    system("pause");
     return 0;
}