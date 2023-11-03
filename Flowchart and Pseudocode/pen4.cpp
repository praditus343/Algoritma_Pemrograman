#include <iostream>
using namespace std;

int main() {
    cout << "== Program Pembayaran ==" << endl;
    int total_belanja;
    cout << "Masukan total belanja: ";
    cin >> total_belanja;
    
    if(total_belanja > 100000){
        cout << "selamat! anda dapat hadidah" << endl;
    }
    cout << "Terimakasih sudah berbelanja di toko kami" << endl;
    return 0;
}