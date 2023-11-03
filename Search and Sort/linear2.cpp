#include <iostream>
 using namespace std;

 int main () {
    int data [10]={20,37,42,77,89,11,88,99,32,80};
    int cari, ditemukan=0, hasilcari[10];

    cout<<"Data Array\n";
    for (int i=0; i<10; i++) {
        cout<<data[i]<<" ";
    }

    cout<<"\nMasukkan nilai yg anda cari : ";
    cin>>cari;

    for (int i=0; i<10; i++) {
        if (data[i] == cari) {
            ditemukan++;
            hasilcari[ditemukan] = i;
        } 
    }
    if (ditemukan == 0) {
        cout<<"Nilai yang dicari tidak ditemukan";
    } else {
        cout<<"Nilai yg dicari terdapat pada data ke "<<endl;
        for (int i=1; i<=ditemukan; i++) {
            cout<<hasilcari[i]+1<<" ";
        }
    }
 }