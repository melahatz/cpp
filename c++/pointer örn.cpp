#include<iostream>

using namespace std;

//Pointer, i�aret�i veya g�stericiler de�er olarak bellek adresini tutan de�i�kenlerdir.
//Ancak pointer de�er olarak tan�mland��� t�rdeki de�i�kenin bellek adresini saklar.
//De�i�kenlerin bellek adresi ampersand (&) i�areti ile al�n�r.

int main(){
	int sayi=1453;
	
	cout<<"sayinin degeri:"<<sayi<<endl;
	cout<<"sayinin adresi:"<<&sayi<<endl;
	
	cout<<endl;
	
	int *ptr=&sayi;
	
	cout<<"pointer�n gosterdigi adres:"<<ptr<<endl;
	cout<<"pointer�n gosterdigi adres degeri:"<<*ptr<<endl;
	cout<<"pointer adresi:"<<&ptr<<endl;
	
}




