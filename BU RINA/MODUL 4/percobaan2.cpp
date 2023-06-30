#include <iostream>
using namespace std;

void swap(int &a, int &b);

int main() {
    int x, y;
    x = 10;
    y = 20;
    
    cout << "x=" << x << " y=" << y << endl;
    cout << "Setelah ditukar:" << endl;
    
    swap(x, y);
    
    cout << "x=" << x << " y=" << y << endl;
    
    return 0;
}

void swap(int &a, int &b) {
    int tmp;
    tmp = a;
    a = b; 
    b = tmp;
}
