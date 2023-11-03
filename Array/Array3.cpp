#include <iostream>
using namespace std;

int main (){
	int nilai[5] = {32,42,76,31,57};
	
	for ( int i=0; i<=4; i++) {
		cout << "Nilai ke-"<<i+1<<": " << nilai [i] <<endl;
	}
}