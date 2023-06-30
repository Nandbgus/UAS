#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n);
void printArray(int arr[], int n);

int main() {
    int n;

    cout << "Masukkan jumlah data: ";
    cin >> n;

    int data[n];

    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << i + 1 << " : ";
        cin >> data[i];
    }

    cout << "Hasil pengurutan dengan metode bubble sort" << endl;

    cout << "Menaik: ";
    bubbleSort(data, n);
    printArray(data, n);

    cout << "Menurun: ";
    for (int i = 0; i < n / 2; i++) { 
        int temp = data[i];
        data[i] = data[n - i - 1];
        data[n - i - 1] = temp;
    }
    printArray(data, n);

    return 0; 
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
