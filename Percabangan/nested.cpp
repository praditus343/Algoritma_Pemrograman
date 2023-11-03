#include <iostream>
using namespace std;

int main (){
	string username, password;
	
	cout << "=== Welcome ===" << endl;
	cout << "Username: ";
	cin >> username;
	
	if (username == "admin"){
		cout << "password: ";
		cin >> password;
		if (password == "amikom"){
			cout << "Selamat datang, login berhasil " << endl;
		} else {
			cout << "Password salah, coba lagi " << endl;
		}
	} else {
		cout << "username tidak terdaftar" << endl;
	}
}