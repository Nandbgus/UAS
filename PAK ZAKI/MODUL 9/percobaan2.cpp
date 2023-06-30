#include <iostream>
using namespace std;
int hasil[3] = {1,2,3};//Variabel hasil sebagai variabel global

void tampil(){
 for(int i=0;i<3;i++){
 cout<<"Hasil : "<<hasil[i]<<endl; 
 }
 cout<<endl;
}
int main()
{
 tampil();
 for(int i=0;i<3;i++){
 cout<<"Hasil : "<<hasil[i]<<endl; 
 }
 
 system("pause");
 return 0; 
}
