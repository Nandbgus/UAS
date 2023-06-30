#include <iostream>
using namespace std;

int hasil = 10;//Variabel hasil sebagai variabel global 

void tampil(){
 cout<<"Hasil : "<<hasil<<endl;
}

int main(){
 tampil();
 
 hasil = 40;
 cout<<hasil<<endl;
 
 system("pause");
 return 0; 
}
