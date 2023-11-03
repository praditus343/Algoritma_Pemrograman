#include <iostream>
using namespace std;

int main (){
	char huruf[5] = {'a','b','c','d','e'};
	
	for ( int i=0; i<=4; i++) {
		cout << "Nilai ke-"<<i+1<<" : " << huruf [i] <<endl;
	}
}