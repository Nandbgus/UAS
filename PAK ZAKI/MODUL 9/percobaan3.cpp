#include <iostream>
using namespace std;

float luas , sisi;

void luaspersegi (){
    luas= sisi * sisi;
    cout<<" Luas : "<<luas<<endl;

}

int main(){
    sisi = 5 ;

    luaspersegi();

    cout<<"Luas : "<<luas<<endl;

    system("pause");
    return 0;
}