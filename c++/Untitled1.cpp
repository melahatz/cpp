#include<iostream>
using namespace std;

int main() {
	 
	 int sayi;
	 cout<<"lutfen bir sayi giriniz:";
	 cin>>sayi;
	 int faktoriyel=1;
	 
	 for(int i=1; i<=sayi; i++)
	 {
	 	faktoriyel*=i;
	 	
	 }
	 cout<<"Faktoriyel\n"<<faktoriyel<<endl;
} 
