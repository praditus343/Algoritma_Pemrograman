#include<iostream>
using namespace std;
int main (){
	string nama;
	int umur;
	char jenis_kelamin;
	
	cout<< " siapakah namamu? "<<endl;
	cout<< "jawab: ";
	getline (cin,nama);
	
	cout<< " berapa umurmu? "<<endl;
	cout<< "jawab:";
	cin >> umur ;
	
	cout <<"jenis kelamin [L/P]:";
	cin>> jenis_kelamin;
	
	cout<< " salam kenal, "<< nama << " sekarang anda berusia ";
	cout << umur << " dan anda berjenis kelamin "<< jenis_kelamin;
}