#include <iostream>
using namespace std;

int main(){
	float jari, hasil ;
	const float p=3.14 ; 
	
	cout << "masukan jari-jari = " << endl ;
	cout << " jawab : ";
	cin >> jari;
	hasil = (jari * p) * 2;
	cout << "keliling lingkaran = " << hasil;
}