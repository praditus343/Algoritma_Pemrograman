#include <iostream>
using namespace std;

int main(){
    int a = 4;
    cout << "====================" << endl;
    cout << "||Operator Ternary||" << endl;
    cout << "====================" << endl;

    //menampilkan nilai a
    cout << "nilai a adalah " << a << endl;

    // menggunakan operator ternary
    string hasil = a > 1 ? "benar": "salah";

    cout << "a > 1 adalah " << hasil << endl;
}