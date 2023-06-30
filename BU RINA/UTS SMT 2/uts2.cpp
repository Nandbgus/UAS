#include <iostream>
#include <string>
using namespace std;

int main() {
    string arr[] = { "25", "65", "01", "09", "50", "100" };
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Data sebelum diurutkan: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    // Bubble Sort secara descending
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                string temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "\nData setelah diurutkan secara descending: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}