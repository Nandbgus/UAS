#include <iostream>
using namespace std;


    struct perpustakaan{
    string namabuku;
    string pengarang;
    int harga,kode,tahun;
    };

    int main(){

        perpustakaan perpus;
        

      
            cout<<" JUDUL BUKU :";
            cin>>perpus.namabuku;

            cout<<" NAMA PENGARANG :";
            cin>>perpus.pengarang;

            cout<<" HARGA BUKU :";
            cin>>perpus.harga;

            cout<<" KODE BUKU :";
            cin>>perpus.kode;

            cout<<" TAHUN :";
            cin>>perpus.tahun; 

            cout<<endl;   
        

       
            cout<<"NAMA BUKU :"<<perpus.namabuku<<endl;
            cout<<"NAMA PENGARANG :"<<perpus.pengarang<<endl;
            cout<<"HARGA BUKU:"<<perpus.harga<<endl;
            cout<<"KODE BUKU :"<<perpus.kode<<endl;
            cout<<"TAHUN :"<<perpus.tahun<<endl;

        
        

        return 0;
    }
