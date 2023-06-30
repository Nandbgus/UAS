#include <iostream>
using namespace std;

int tambah (int x, int y){
    int hasil;

    hasil = x + y;
    
    return hasil;
}

int main(){
    int a,b,hasil;

    cout<<"Masukkan bilangan pertama : ";
    cin>>a;
    cout<<"Masukkan bilangan kedua : ";
    cin>>b;

    hasil = tambah(a,b);
    cout<<"Hasil : "<<hasil<<endl;

    system("pause");
    return 0;
}
