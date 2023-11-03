#include <iostream>
using namespace std;

int main (){
	int jawaban;
	
	cout << "Berapa hasil 3+4?" << endl;
	cout << "jawab> ";
	cin >> jawaban;
	
	string hasil = (jawaban == 7) ? "benar" : "Salah";
	cout << "Jawaban anda: " << hasil << endl;
}