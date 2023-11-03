#include <iostream>
using namespace std;

int main(){
	char ulangi = 'y';
	int i = 0;
	
	
	while(ulangi == 'y'){
		cout<<"Apakah kamu mau mengulang?\n";
		cout<<"Jawab (y/t): ";
		cin>> ulangi;
		
		
		i++;
	}
		
	cout<<"Perulangan selesai!\n";
	cout<<"Kamu menggulang sebanyak "<<i<<" kali \n";
}