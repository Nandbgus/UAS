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
        cout<<"         PROGRAM QUEUE V.1               "<<endl;
        cout<<"========================================="<<endl;
        cout<<"1. ENQUEUE"<<endl;
        cout<<"2. DEQUEUE"<<endl;
        cout<<"3. CETAK QUEUE"<<endl;
        cout<<"4. CLEAR"<<endl;
        cout<<"5. KELUAR"<<endl;
        cout<<"Masukkan pilihan :";
        cin>>pil;

        switch (pil)
        {
            case 1: // OPERASI ENQUEUE
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

            case 2: // OPERASI DEQUEUE
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

            case 3: // OPERASI MENAMPILKAN QUEUE
            {
                if(back != 0){
                    for(i=0; i<back; i++){
                        cout<<queue[i];
                    }
                    cout<<endl;
                }
                else{
                    cout<<"Queue Kosong"<<endl;
                }
                system("pause");
                break;
            }

            case 4: // OPERASI MENGHAPUS (CLEAR) ANTRIAN
            {
                back = 0;
                cout<<endl;
                system("pause");
                break;
            }

            default: // UNTUK INPUTAN SELAIN 1-5
            {
                break;
            }
        }
    } while (pil != 5);

    system("pause");
    return 0;
}
