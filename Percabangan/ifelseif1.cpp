#include <iostream>
using namespace std;

int main (){
	int nilai;
	string grade;
	
	cout << "=== Program Grade Nilai ===" << endl;
	cout << "Inputkan nilai akhir: ";
	cin >> nilai;
	
	
	if (nilai > 80) {
		grade = "A";
	} else if (nilai > 60) {
		grade = "B";
	} else if (nilai > 40) {
		grade = "C";
	} else if (nilai > 20) {
		grade = "D";
	} else {
		grade = "E";
	}
	
	cout << "Grade anda: " << grade << endl;
}