#include <iostream>
using namespace std;

int main()
{
    // variabel
    string username, password;
    int i, mahasiswa;

	cout<<" Aplikasi Input Mahasiswa "<<endl;
	cout<<"=========================="<<endl;
	cout<<endl;
    cout << "Masukan username : ";
    cin >> username;
    if (username == "admin")
    {
        cout << "Masukan password : ";
        cin >> password;
		cout<<endl;
        if (password == "admin")
        {
            cout << "Selamat, kamu telah berhasil login Aplikasi " << endl;
			cout<<endl;
            cout << "Masukan data jumlah mahasiswa = ";
            cin >> mahasiswa;
            string nama[mahasiswa], nim[mahasiswa], kelas[mahasiswa], prodi[mahasiswa];
            for (int i = 0; i < mahasiswa; i++)
            {
				cout<<endl;
                cout << "Biodata ke - " <<i + 1<< endl;
				cout<<endl;
                cout << "Masukan Nama Mahasiswa	= ";
                cin >> nama[i];
                cout << "Masukan NIM Mahasiswa	= ";
                cin >> nim[i];
                cout << "Masukan Kelas Mahasiswa	= ";
                cin >> kelas[i];
                cout << "Masukan Prodi Mahasiswa	= ";
                cin >> prodi[i];
            }
            for (int i = 0; i < mahasiswa; i++)
            {
				cout<<"======================================"<<endl;
                cout << "||Data mahasiswa ke " << i + 1<< endl;
                cout << "||Nama Mahasiswa	: " << nama[i]<< endl;
                cout << "||NIM Mahasiswa		: " << nim[i]<< endl;
                cout << "||Kelas Mahasiswa	: " << kelas[i]<< endl;
                cout << "||Prodi Mahasiswa	: " <<  prodi[i]<< endl;
				cout<<"======================================"<<endl;
            }
        }
        else
        {
            cout << "Password salah! coba lagi";
        }
    }
    else
    {
        cout << "Username salah! coba lagi";
    }
}