#include<iostream>
using namespace std;
int main()
{
 string nama[6] = {"Abadi Printing","Sahabat","Gacoan", "Ayam Geperek 69", "Golden Cinema", "Kediri Mall"};
 cout<<"Menampilkan secara manual"<<endl;
 cout<<"NAMA : "<<nama[0]<<endl;
 cout<<"NAMA : "<<nama[1]<<endl;
 cout<<"NAMA : "<<nama[2]<<endl;
 cout<<"NAMA : "<<nama[3]<<endl;
 cout<<"NAMA : "<<nama[4]<<endl;
 cout<<"NAMA : "<<nama[5]<<endl;
 
 cout<<"Menampilkan dengan menggunakan for "<<endl;
 for(int i = 0; i<6; i++)
 {
 cout<<"NAMA : "<<nama[i]<<endl; 
 }
 system("pause");
 return 0; 
}