#include <iostream>
using namespace std;

int main(){

    int data = 5;
    int *pointerku;

    cout<<"data         : "<<data<<endl;
    cout<<"alamat data  : "<<&data<<endl;
    cout<<"pointerku    : "<<pointerku<<endl<<endl;

    pointerku = &data; //mengisi pointerku dengan alamat data
    cout<<"pointerku    : "<<pointerku<<endl<<endl;

    *pointerku = 10; //merubah data dalam alamat yang ditunjuk pointerku
    cout<<"data         : "<<data<<endl;


    system("Pause");
    return 0;
}