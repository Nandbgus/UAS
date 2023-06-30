#include <iostream>
#include<fstream>
using namespace std;

int main(){

    string baris;
    int i, data[5]={3,5,2,14,6};

    //membuka file dalam mode menulis
    ofstream tulisfile;
    //menunjuk ke sebuah nama file
    tulisfile.open("contoh.txt");

    for(i=0;i<5;i++){
        cout<<"Menulis bilangan"<<data[i]<<" Ke dalam file"<<endl;
        tulisfile<<data[i]<<endl;
    }
    //selesai dalam menulis sekarang tutup filemnya
    tulisfile.close();

    //membuka file dalam mode membaca
    ifstream bacafile;
    //menunjuk kesebuah file    
    bacafile.open("contoh.txt");

    cout<<endl<<">= Membuka dan membaca file"<<endl;
    //jika file ada maka
    if(bacafile.is_open()){

        //melakukan perulangan setiap baris
        while(getline (bacafile,baris)){

            //dan tampilkan disini
            cout<<baris<<endl;
        }
        //tutup file tersebut setelah selesai
        bacafile.close();
        }
        //jika tidak menemukan file akan menampilkan ini
        else cout<<"Tidak dapat membuka file";

        system("pause");
        return 0;
    }
