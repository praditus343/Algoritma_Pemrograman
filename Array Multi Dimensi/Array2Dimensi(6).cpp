#include <iostream>
using namespace std;

int main(){
	int a[2][3]; //membuat ordo 2x3
	int b [2][3]; //membuat ordo 2x3
	
	//Mengisi Matrik A
	cout<<"Inputkan nilai matrik A"<<endl;
	for (int i=0; i<=1; i++) {
		for (int j=0; j<=2; j++) {
			cout<<"Inputkan nilai index ke-["<<i<<"]["<<j<<"]: ";
			cin>>a[i][j];
		}
	}
	
	//mengisi matrik B
	cout<<"\nInputkan nilai matrik B"<<endl;
	for (int i=0; i<=1; i++) {
		for (int j=0; j<=2; j++){
			cout<<"Inputkan nilai index ke-["<<i<<"]["<<j<<"]: ";
			cin>>b[i][j];
		}
	}
	
	//menampilkan matrik A
	cout<<"\nNilai matrik A";
	for (int i=0; i<=1; i++){
		cout<<endl;
		for (int j=0; j<=2; j++){
			cout<<a[i][j]<<" ";
		}
	}
	
	//menampilkan matrik B
	cout<<"\nNilai matrik B";
	for (int i=0; i<=1; i++){
		cout<<endl;
		for (int j=0; j<=2; j++){
			cout<<b[i][j]<<" ";
		}
	}
	
	//menampilkan penjumlahan matrik A+B
	cout<<"\nHasil penjumlahan matrik A+B";
	for (int i=0; i<=1; i++){
		cout<<endl;
		for (int j=0; j<=2; j++){
			cout<<a[i][j]+b[i][j]<<" ";
		}
	}
}
