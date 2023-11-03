#include <iostream>
using namespace std;

int main (){
	string nim, password;
	
	cout << "========= Login Dashboard Mahasiswa =========" << endl;
	cout << "masukan nim: ";
	cin>> nim;
	cout<< "Masukan password: ";
	cin >> password;
	
	
	if ((nim == "22.11.4662") && (password == "amikom")){
		cout << "Selamat egi, login Dashboard Mahasiswa Berhasil !" << endl;
	} else {
		cout << "Kombinasi nim dan password salah, coba lagi!" << endl;
	}
}