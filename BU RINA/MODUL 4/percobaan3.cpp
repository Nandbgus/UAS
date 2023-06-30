#include <iostream>
using namespace std;

void swap(int &a, int &b);
void sorting_selection(int data[], int jml);
void sorting_bubble(int data[], int jml);
void sorting_insertion(int data[], int jml);

int main() {
    int data[5] = {4, 2, 3, 5, 1};
    int jml = 5;
    int i;

    cout << "Data awal: ";
    for (i = 0; i < jml; i++)
        cout << data[i] << " ";
    cout << endl;

    cout << "Data urut dengan menggunakan Selection Sort: ";
    sorting_selection(data, jml);
    for (i = 0; i < jml; i++)
        cout << data[i] << " ";
    cout << endl;

    cout << "Data urut dengan menggunakan Bubble Sort: ";
    sorting_bubble(data, jml);
    for (i = 0; i < jml; i++)
        cout << data[i] << " ";
    cout << endl;

    cout << "Data urut dengan menggunakan Insertion Sort: ";
    sorting_insertion(data, jml);
    for (i = 0; i < jml; i++)
        cout << data[i] << " ";
    cout << endl;

    return 0;
}

void swap(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void sorting_selection(int data[], int jml) {
    int i, j;
    for (i = 0; i < jml - 1; i++) {
        for (j = i + 1; j < jml; j++) {
            if (data[j] < data[i]) {
                swap(data[j], data[i]);
            }
        }
    }
}

void sorting_bubble(int data[], int jml) {
    int i, j;
    for (i = jml - 1; i > 0; i--) {
        for (j = 0; j < i; j++) {
            if (data[j + 1] < data[j]) {
                swap(data[j + 1], data[j]);
            }
        }
    }
}

void sorting_insertion(int data[], int jml) {
    int i, j, key;
    for (i = 1; i < jml; i++) {
        key = data[i];
        j = i - 1;

        while (j >= 0 && data[j] > key) {
            data[j + 1] = data[j];
            j = j - 1;
        }
        data[j + 1] = key;
    }
}
