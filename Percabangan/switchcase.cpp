#include <iostream>
using namespace std;

int main (){
	char grade;
	
	cout << "Inputkan grade: ";
	cin >> grade;
	
	switch (grade){
		case 'A':
			cout << "Luar biasa!" << endl;
			break;
		case 'B':
			cout << "Bagus!" << endl;
			break;
		case 'C':
			cout << "Cukup!" << endl;
			break;
		case 'D':
		case 'E':
			cout << "Anda remidi!" << endl;
			break;
		default:
			cout << "Grade Salah!" << endl;
	}
}