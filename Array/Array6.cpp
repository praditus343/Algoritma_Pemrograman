#include <iostream>
using namespace std;

int main (){
	int i,n;
	cout <<"Inputkan Banyak Nilai = ";
	cin>>n;
	int nilai[n];
	
	for ( int i=0; i<n; i++) {
		cout << "Input Nilai Ke "<<i+1<<" = ";
		cin>>nilai[i];
		
	}
	cout <<endl;
	for(i=0; i<n; i++){
		cout<<"Nilai ke "<<i+1<<" = "<<nilai[i]<<endl;
	}
}