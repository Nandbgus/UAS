#include <iostream>
#include <string>

using namespace std;

int main() {
    string username = "admin";
    string password = "password";
    int attempts = 0;

    while (attempts < 3) {
        string input_username;
        cout << "Masukkan username: "; 
        cin >> input_username;

        if (input_username == username) {
            string input_password;
            cout << "Masukkan password: ";
            cin >> input_password;

            if (input_password == password) {
                cout << "Login berhasil!" << endl;
                break;
            } else {
                cout << "Password salah! Silakan coba lagi." << endl;
                attempts++;
            }
        } else {
            cout << "Username salah! Silakan coba lagi." << endl;
            attempts++;
        }
    }

    if (attempts >= 3) {
        cout << "Batas percobaan login telah tercapai. Program akan keluar." << endl;
    }

    return 0;
}
