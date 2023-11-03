#include <iostream>
using namespace std;

void fungsiluas(int p, int l){
	int luas = p*l;
	cout<<"Hasil Luas adalah "<<luas;
}

int main(){
	int panjang, lebar;
	cout<<"Input nilai panjang = ";
	cin>>panjang;
	cout<<"Inputkan nilai Lebar = ";
	cin>>lebar;
	
	fungsiluas(panjang,lebar);
}