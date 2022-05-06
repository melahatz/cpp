#include<iostream>

using namespace std;

//Pointer, iþaretçi veya göstericiler deðer olarak bellek adresini tutan deðiþkenlerdir.
//Ancak pointer deðer olarak tanýmlandýðý türdeki deðiþkenin bellek adresini saklar.
//Deðiþkenlerin bellek adresi ampersand (&) iþareti ile alýnýr.

int main(){
	int sayi=1453;
	
	cout<<"sayinin degeri:"<<sayi<<endl;
	cout<<"sayinin adresi:"<<&sayi<<endl;
	
	cout<<endl;
	
	int *ptr=&sayi;
	
	cout<<"pointerýn gosterdigi adres:"<<ptr<<endl;
	cout<<"pointerýn gosterdigi adres degeri:"<<*ptr<<endl;
	cout<<"pointer adresi:"<<&ptr<<endl;
	
}




