#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    a = 10;
    b = 20;
    
    cout << "a=" << a << " b=" << b << endl;
    cout << "Setelah ditukar:" << endl;
    
    c = a; 
    a = b;
    b = c;
    
    cout << "a=" << a << " b=" << b << endl;
    
    return 0;
}
