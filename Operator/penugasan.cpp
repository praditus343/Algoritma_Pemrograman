#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10;

    cout << "======================" << endl; 
    cout << "||Operator Penugasan||" << endl;
    cout << "======================" << endl;
    
    b += a;
    cout << "Hasil b += a adalah " << b << endl;
    
    a=5, b=10;
    b -= a;
    cout << "Hasil b -= a adalah " << b << endl;
    
    a=5, b=10;
    b *= a;
    cout << "Hasil b *= a adalah " << b << endl;
    
    a=5, b=10;
    b /= a;
    cout << "Hasil b /= a adalah " << b << endl;
    
    a=5, b=10;
    b %= a;
    cout << "Hasil b %= a adalah " << b << endl;
}