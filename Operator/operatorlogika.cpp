#include <iostream>
using namespace std;

int main(){
    int a = 1;
    int b = 0;
    bool hasil;

    cout << "===============" << endl;
    cout << "operator logika" << endl;
    cout << "===============" << endl;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // logika AND
    hasil = a && b;
    cout << "a && b = " << hasil << endl;

    // logika OR
    hasil = a || b;
    cout << "a || b = " << hasil << endl;

    // logiks NOT 
    cout << "!a = " << !a << endl;
}