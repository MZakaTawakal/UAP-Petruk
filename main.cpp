#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool isLoggedIn()
{
	string username, password;
	string un, pw;
	
	cout<<"Username anda: ";
	cin>>username;
	cout<<"password anda: ";
	cin>>password;
	
	ifstream read(username + ".txt");
	getline(read, un);
	getline(read, pw);
	
	if (un == username && pw == password)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{	
	int choice;
	
	cout<<"main menu"<<endl;
	cout<<"______________________________"<<endl;
	cout<<"1. Registrasi"<<endl;
	cout<<"2. Masuk"<<endl;
	cout<<endl;
	cout<<"pilih menu: "<<endl;
	cin>>choice;
	
	if(choice == 1)
	{
		string username, password
		
		cout<<"Buat akun dulu"<<endl;
		cout<<endl;
		cout<<"Username: "<<endl;
		cin>>username;
		cout<<"password: "<<endl;
		cin>>password;
		
		ofstream file;
		file.open(username +".txt");
		file <<username<<endl<<password;
		file.close();
		cout<<"Selamat datang "<<username<<"!"<<endl;
	}
	else if(choice == 2)
	{
		bool status = isLoggedIn;
		
		if(!status)
		{
			system("clear")
			cout<<endl;
			cout<<"kamu belum mendaftar"<<endl;
			main();
			return 0;
		}
		else
		{
			int choiceTwo;
			
			cout<<"Halo "<<username<<"!"<<endl;
			cout<<endl;
			cout<<"DASHBOARD"<<endl;
			/*cout<<"kamu belum memesan tiket"<<endl;
			cout<<"tidak ada pemberitahuan baru"<<endl; //contoh notifikasi. */
			cout<<endl;
			cout<<"1. Jadwal film"<<endl;
			cout<<"2. Tiket"<<endl;
			cout<<"3. log out"<<endl;
			cout<<"4. Menu utama"<<endl;
			cout<<"pilih menu: "<<endl;
			cin>>choiceTwo;
			
			if(choiceTwo == 1)
			{
				
			}
			else if(choiceTwo == 2)
			{
				
			}
			else if(choiceTwo == 3)
			{
				system("exit");
			}
			else if(choiceTwo == 4)
			{
				main();
			}
			return 1;
		}
	}
}
