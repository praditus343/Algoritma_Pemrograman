#include <iostream>
using namespace std;

int luas;

int fungsiluas(int p, int l){
	luas = p*l;
	return luas;
}
	
int main(){
	int panjang, lebar;
	
	cout<<"Input nilai panjang = ";
	cin>>panjang;
	cout<<"Inputkan nilai Lebar = ";
	cin>>lebar;
	
	fungsiluas(panjang,lebar);
	cout<<"Hasil Luas adalah "<<luas;
}