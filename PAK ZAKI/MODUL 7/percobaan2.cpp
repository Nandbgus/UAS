#include <iostream>
#include <fstream>
using namespace std;

int main(){

    string baris;

    //membuka file dalam mode menulis
    ofstream tulisfile;
    //menunjuk ke sebuah nama file 
    tulisfile.open("contohfile.txt");
    
    cout<<">= Menulis file, untuk keluar ketik huruf q"<<endl;

    //unlimited loop untuk menulis
    while(true){
        cout<<"- ";
        //mendapatkan setiap karakter dalam satu baris
        getline(cin,baris);
        //loop akan berhenti jika memasukkan karakter q
        if(baris== "q") break;
        //menulis dan memasukkan nilai dari'baris' ke dalam  file
        tulisfile<<baris<<endl;
    }
    tulisfile.close();

    //membuka file dalam mode membaca
    ifstream bacafile;
    //menunjuk ke sebuah file
    bacafile.open("contohfile.txt");

    cout<<endl<<">= Membuka dan membaca file"<<endl;
    //jika file ada maka
    if(bacafile.is_open()){
        //melakukan perulangan setiap baris

        while(getline(bacafile,baris)){
            //dan tampilkan disini
            cout<<baris<<endl;
        }
        //tutup file tersebut jika selesai
        bacafile.close();
    }
    //jika tidak ditemukan file maka akan menampilkan ini   
    else cout<<"Tidak dapat membuka  file";

    system ("pause");
    return 0;
}