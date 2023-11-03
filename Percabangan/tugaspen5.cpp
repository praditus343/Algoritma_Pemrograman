#include <iostream>
#include <stdlib.h>
using namespace std;

int main (){
	float pilihan, panjang, lebar, jari;
	const float phi = 3.14;
	menu:
	cout<<"================================================="<<endl;
	cout<<" 1.Menghitung Luas dan Keliling Persegi Panjang "<<endl;
	cout<<" 2.Menghitung Luas dan Keliling Lingkaran "<<endl;
	cout<<" 3.Exit/keluar "<<endl;
	cout<<"================================================="<<endl;
	cout<<"Masukan Angka pilihan Anda = "<<endl;
	cin>>pilihan;
	system("cls");
	
	if (pilihan == 1) {
		cout<<"Masukan Nilai Panjang \t\t= ";
		cin>>panjang;
		cout<<"Masukan Nilai Lebar \t\t= ";
		cin>>lebar;
		cout<<"Luas Persegi Panjang \t\t= "<< panjang*lebar<<endl;
		cout<<"Keliling Persegi Panjang \t= "<< 2*(panjang+lebar)<<endl;
		goto menu;
		
	} else if (pilihan == 2) {
		cout<<"Masukan Nilai Jari-Jari \t= ";
		cin>>jari;
		cout<<"Luas Lingkaran \t\t\t= "<< phi*jari<<endl;
		cout<<"Keliling Lingkaran \t\t= "<< 2*phi*jari<<endl;
		goto menu;
		
			
	} else if (pilihan == 3) {
		cin.ignore();
		
		
	} else {
		cin.ignore();
		cout<<"Pilihan salah, tekan enter untuk melanjutkan";
		cin.get();
		system("cls");
		goto menu;	
	}
}