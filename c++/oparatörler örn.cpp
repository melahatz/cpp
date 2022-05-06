#include<iostream>

using namespace std;

int main() {
	
	string sys_username="Melahatz";
	string sys_password="12345";
	
	string username;
	string password;
	
	cout<<"Kullanici adinizi giriniz:";
	cin>>username;
	
	cout<<"Parolanizi giriniz:";
	cin>> password;
	
	if(username==sys_username && password==sys_password)
	{
		cout<<"Hosgeldiniz";
	}
	else if(username != sys_username && password==sys_password)
	{
		cout<<"Hatali kullanici adi girdiniz:";
	}
	
	else if(username==sys_username && password!= sys_password)
	{
		cout<<"Hatali paralo girdiniz";
	}
	
	else
	{
		cout<<"Kullanici girisi ve parola hatalý";
	}
}
