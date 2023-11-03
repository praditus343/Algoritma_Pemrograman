#include <iostream>
using namespace std;

int main (){
	string buah[5] = {"Apel","Jambu","Durian","Anggur","Mangga"};
	
	for ( int i=0; i<=4; i++) {
		cout << "Nilai ke-"<<i+1<<" : " << buah [i] <<endl;
	}
}