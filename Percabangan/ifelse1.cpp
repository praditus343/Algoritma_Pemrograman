#include <iostream>
using namespace std;

int main (){
	string password;
	
	cout << "========= Login wifi =========" << endl;
	cout << "masukan Password: ";
	cin >> password;
	
	
	if (password == "amikom"){
		cout << "Selamat login wifi berhasil !" << endl;
	} else {
		cout << "Password salah, coba lagi!" << endl;
	}
}