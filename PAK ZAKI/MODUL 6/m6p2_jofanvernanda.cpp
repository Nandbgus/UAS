#include <iostream>
using namespace std;

int main(){

    char pilih = 'y';
    int tahun_lahir;

    while(pilih == 'y')
    {
        cout<<"Masukkan tahun lahir anda  : ";
        cin>>tahun_lahir;
        cout<<"Usia anda saat ini "<<2023 - tahun_lahir<<" tahun"<<endl;

        cout<<"Apakah anda ingin mengulang?";
        cin>>pilih;
        system("cls"); //UNTUK MEMBERSIHKAN LAYAR
    }
    
    system ("pause");
    return 0;


}