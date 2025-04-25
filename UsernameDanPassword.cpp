#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char username[15];
	char password[15];
	cout<<"Masukkan username : ";cin>>username;
	cout<<"Masukkan password : ";cin>>password;
	if(username == "admin" && password == "admin")
		cout<<"Anda adalah admin"<<endl;	
	else{
		cout<<"Anda bukan admin"<<endl;
    }
return 0;
}

