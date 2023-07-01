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

// Fungsi untuk memilih pesawat yang ingin dipesan
string chooseJetName()
{
    string jetName;
    cout << "\nSilakan masukkan nama pesawat yang ingin dipesan: ";
    cin >> jetName;
    return jetName;
}

// Fungsi untuk memilih durasi penyewaan
int chooseDuration()
{
    int durationChoice;
    cout << "Silakan pilih paket durasi penyewaan:\n1. 1 hari\n2. 3 hari\n3. 7 hari" << endl;
    cout << "Pilihan Durasi: ";
    cin >> durationChoice;
    switch (durationChoice)
    {
    case 1:
    {
        return 1;
        break;
    }
    case 2:
    {
        return 3;
        break;
    }
    case 3:
    {
        return 7;
        break;
    }
    default:
        return 1;
    }
}

// Fungsi Struk Pembayaran
void displayPaymentReceipt(const Jet jets[], int jetCount)
{
    cout << "\n============================== Struk Pembayaran ==============================" << endl;
    cout << setw(15) << left << "Nama Pesawat" << setw(15) << "| Model" << setw(15) << "| Durasi" << setw(15) << "| Harga"
         << "|" << endl;
    cout << "-------------------------------------------------------------------------------" << endl;
    int totalPrice = 0;
    for (int i = 0; i < jetCount; i++)
    {
        if (jets[i].isBooked)
        {
            cout << setw(15) << left << jets[i].name << setw(15) << "| " + jets[i].model << setw(10) << left << "| " << jets[i].duration << " hari"
                 << "| $" << jets[i].price * jets[i].duration << setw(15) << "| " << endl;
            totalPrice += jets[i].price * jets[i].duration;
        }
    }
    cout << "-------------------------------------------------------------------------------" << endl;
    cout << left << "Total harga yang harus dibayar : $" << totalPrice << endl;
    cout << "===============================================================================" << endl;
}

int main()
{
    string username;
    cout << "Selamat datang di Program Persewaan Jet!" << endl;
    cout << "Silakan masukkan username Anda: ";
    cin >> username;

    Jet jets[MAX_JETS];
    int jetCount = 0;

    initializeJets(jets, jetCount);

    cout << "\nHalo, " << username << "!" << endl;
    cout << "Berikut adalah pilihan program Persewaan Jet:" << endl;

    while (true)
    {
        int choice = chooseMenu();

        switch (choice)
        {
        case 1:
        {
            string model = chooseModel();
            displayJets(jets, jetCount, model);
            break;
        }
        case 2:
        {
            string jetName = chooseJetName();
            bool found = false;
            int totalPrice = 0;
            bool isInCart = false;

            for (int i = 0; i < jetCount; i++)
            {
                if (jets[i].name == jetName)
                {
                    found = true;
                    if (jets[i].isBooked && isInCart)
                    {
                        cout << "Pesawat " << jetName << " Kosong" << endl;
                    }
                    else
                    {
                        if (jets[i].isBooked)
                        {
                            cout << "Pesawat " << jetName << " sudah ada dalam keranjang." << endl;
                        }
                        else
                        {
                            jets[i].isBooked = true;
                            jets[i].duration = chooseDuration();
                            totalPrice += jets[i].price * jets[i].duration;
                            cout << "Pesawat " << jetName << " berhasil dipesan!" << endl;
                            isInCart = true;
                        }
                    }
                    break;
                }
            }

            if (!found)
            {
                cout << "Pesawat tidak ditemukan." << endl;
            }
            else if (found && isInCart)
            {
                cout << "Pesawat telah dimasukkan ke dalam keranjang, dengan total harga: $" << totalPrice << endl;
            }
            break;
        }
        case 3:
            displayPaymentReceipt(jets, jetCount);
            break;
        case 4:
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
            break;
        }

        if (choice == 4)
        {
            break;
        }
    }

    cout << "\nTerima kasih telah menggunakan Program Persewaan Jet!" << endl;

    return 0;
}