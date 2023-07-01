#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Batasan ukuran maksimum array pesawat
const int MAX_JETS = 10;

// Struktur data untuk menyimpan informasi pesawat
struct Jet
{
    string name;
    string model;
    bool isBooked;
    int price;
    int duration;
};

// Fungsi untuk menginisialisasi data pesawat
void initializeJets(Jet jets[], int &jetCount)
{
    jets[jetCount++] = {"Skyhawk", "Free Flight", false, 500, 0};
    jets[jetCount++] = {"Firebird", "Free Flight", false, 600, 0};
    jets[jetCount++] = {"Thunderbolt", "Free Flight", false, 700, 0};
    jets[jetCount++] = {"Falcon", "Glider A2", false, 800, 0};
    jets[jetCount++] = {"Swift Soarer", "Glider A2", false, 560, 0};
    jets[jetCount++] = {"SkyGlider", "Glider A2", false, 700, 0};
    jets[jetCount++] = {"Phoenix", "Rubber Power", false, 900, 0};
    jets[jetCount++] = {"Spitfire", "Rubber Power", false, 740, 0};
    jets[jetCount++] = {"Dragonfly", "Rubber Power", false, 340, 0};
}

// Fungsi untuk menampilkan pesawat dalam suatu model
void displayJets(const Jet jets[], int jetCount, const string &model)
{
    cout << "Pesawat Model " << model << " yang tersedia:" << endl;
    for (int i = 0; i < jetCount; i++)
    {
        if (jets[i].model == model && !jets[i].isBooked)
        {
            cout << "- " << jets[i].name << ", dengan harga: $" << jets[i].price << "/hari" << endl;
        }
    }
    cout << endl;
}

// Fungsi untuk memilih menu
int chooseMenu()
{
    int choice;
    cout << "\nMenu:\n1. Melihat Pilihan Pesawat Jet\n2. Memesan Jet\n3. Lihat Struk Pembayaran\n4. Keluar" << endl;
    cout << "Pilihan Anda: ";
    cin >> choice;
    return choice;
}

// Fungsi untuk memilih model pesawat
string chooseModel()
{
    cout << "\nPilihan Model Pesawat:\n1. Free Flight\n2. Glider A2\n3. Rubber Power" << endl;
    int modelChoice;
    cout << "Pilihan Model: ";
    cin >> modelChoice;

    switch (modelChoice)
    {
    case 1:
        return "Free Flight";
    case 2:
        return "Glider A2";
    case 3:
        return "Rubber Power";
    default:
        return "";
    }
}

int main()
{
}