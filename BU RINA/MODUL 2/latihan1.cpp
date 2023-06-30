#include <iostream>
using namespace std;

int main(){

    float a[5];

    for(int i=0; i<=4; i++){
    cout<<"Masukkan Nilai Matriks ["<<i<<"]";
    cin>>a[i];--------------------------------------------------------------------------------------------------
    }

    cout<<"Menampilkan angka dengan urutan besar ke kecil"<<endl;
    for (int i=4;i>=0; i--){
        cout<<"a["<<i<<"]="<<a[i]<<endl;
    }


    return 0;
}