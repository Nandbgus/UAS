#include<iostream>
using namespace std;

struct alamat{
    string jalan;
    string kota;
    int kode;
};
struct biodata{
    int nim;
    string nama;
    string departemen;
    alamat alm;
};


int main(){

    biodata pgw;


    cout<<"NIM :";
    cin>>pgw.nim;

    cout<<"Nama Pegawai :";
    cin>>pgw.nama;

    cout<<"Departemen :";
    cin>>pgw.departemen;

    cout<<"Jalan :";
    cin>>pgw.alm.jalan;

  cout<<"Kota :";
    cin>>pgw.alm.kota;

    cout<<"Kode Pos :";
    cin>>pgw.alm.kode;

    //OUTPUT

    cout<<" "<<endl;
    cout<<"NIM :"<<pgw.nim<<endl;
    cout<<"Nama Pegawai :"<<pgw.nama<<endl;
    cout<<"Departemen :"<<pgw.departemen<<endl;
    cout<<"Jalan :"<<pgw.alm.jalan<<endl;
    cout<<"Kota :"<<pgw.alm.kota<<endl;
    cout<<"Kode Pos :"<<pgw.alm.kode<<endl;

    return 0;

}
