#include <iostream>
using namespace std;

int main (){
	int i,n, jumlah=0, terkecil, terbesar;
	cout <<"Inputkan Banyak Nilai = ";
	cin>>n;
	int nilai[n];
	for ( int i=0; i<n; i++) {
		cout << "Input Nilai Ke "<<i+1<<" = ";
		cin>>nilai[i];
		jumlah = jumlah + nilai[i];
		if (i==0) {
			terkecil = nilai[0];
			terbesar = nilai[0];
		}
		if (nilai[i] < terkecil){
			terkecil = nilai[i];
		}
		if (nilai[i] > terbesar){
			terbesar = nilai[i];
		}
	}
	cout<<"\nData Nilai";
	for(i=0; i<n; i++){
		cout<<" "<<nilai[i];
	}
	cout<<"\nJumlah Nilainya Adalah = "<<jumlah;
	cout<<"\nNilai Terkecil = "<<terkecil;
	cout<<"\nNilai Terbesar = "<<terbesar;
	cout<<"                   "<<endl;
}