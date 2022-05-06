#include<iostream>

using namespace std;

int main(){
	string sys_username;
	string sys_password;
	string username="melahatz";
	string password="12345";
	

	
	while(true){
		
		cout<<"Kullanici adi\n";
		cin>>sys_username;
		cout<<"Parola\n";
		cin>>sys_password; 
		
		if(sys_username==username && sys_password==password)
		{
			cout<<"Hosgeldiniz:"<<endl;
			break;
		}
		else if(sys_username==username && sys_password!=password)
		{
			cout<<"Parola yanlis giris yaptiniz:";
			
		}
		else if(sys_username!=username && sys_password==password)
		{
			cout<<"Kullanici adi yanlis giris yaptiniz:\n";
			
		}
		else {
			cout<<"Kullanici adi ve parola hatali\n";
		}
	}
}

