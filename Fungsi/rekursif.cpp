#include <iostream>
using namespace std;

int rekursiffaktorial (int f){
	if (f==1){
		return 1;
	} else {
		return f*rekursiffaktorial(f-1);
	}
}
	
int main(){
	int faktorial;
	
	cout<<"Input nilai faktorial = ";
	cin>>faktorial;
	
	cout<<"Hasil Faktorialnya adalah "<<rekursiffaktorial(faktorial);
}