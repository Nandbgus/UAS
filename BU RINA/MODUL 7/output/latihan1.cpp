#include <iostream>
#define max 5 // VARIABEL PENENTU PANJANG ANTRIAN
using namespace std;

char queue[max];  // INISIALISASI ARRAY QUEUE
short back = 0;  //  VARIABEL PENUNJUK POSISI BELAKANG

int main(){
    char huruf;
    short pil, i;

    do{
        system("cls"); // UNTUK CLEAR SCREEN
        cout<<"========================================="<<endl;
        cout<<"         PROGRAM STACK & QUEUE V.1        "<<endl;
        cout<<"========================================="<<endl;
        cout<<"1. ENQUEUE / PUSH"<<endl;
        cout<<"2. POP"<<endl;
        cout<<"3. DEQUEUE"<<endl;
        cout<<"4. CETAK QUEUE"<<endl;
        cout<<"5. CLEAR"<<endl;
        cout<<"6. KELUAR"<<endl;
        cout<<"Masukkan pilihan :";
        cin>>pil;

        switch (pil)
        {
            case 1: // OPERASI ENQUEUE / PUSH
            {
                if(back < max){
                    cout<<"Masukkan karakter: ";
                    cin>>huruf;
                    queue[back] = huruf;
                    back++;
                }
                else{
                    cout<<"Queue penuh!"<<endl;
                }
                system("pause");
                break;
            }

            case 2: // OPERASI POP
            {
                if(back != 0){
                    cout<<"POP antrian pertama: "<<queue[0]<<endl;
                    for(i=0; i<back-1; i++){
                        queue[i] = queue[i + 1];
                    }
                    back--;
                }
                else{
                    cout<<"Queue Kosong"<<endl;
                }
                system("pause");
                break;
            }

            case 3: // OPERASI DEQUEUE
            {
                if(back != 0){
                    cout<<"Dequeue antrian pertama: "<<queue[0]<<endl;
                    for(i=0; i<back-1; i++){
                        queue[i] = queue[i + 1];
                    }
                    back--;
                }
                else{
                    cout<<"Queue Kosong"<<endl;
                }
                system("pause");
                break;
            }

            case 4: // OPERASI CETAK QUEUE
            {
                if(back != 0){
                    cout<<"Isi Queue: ";
                    for(i=0; i<back; i++){
                        cout<<queue[i]<<" ";
                    }
                    cout<<endl;
                }
                else{
                    cout<<"Queue Kosong"<<endl;
                }
                system("pause");
                break;
            }

            case 5: // OPERASI CLEAR
            {
                back = 0;
                cout<<"Queue telah dihapus."<<endl;
                system("pause");
                break;
            }

            default: // UNTUK INPUTAN SELAIN 1-6
            {
                break;
            }
        }
    } while (pil != 6);

    system("pause");
    return 0;
}
