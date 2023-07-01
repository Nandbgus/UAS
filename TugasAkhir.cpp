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

int main()
{
}