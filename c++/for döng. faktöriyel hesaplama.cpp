#include<iostream>

using namespace std;

int main(){
	int sayi,faktoriyel=1;
	
	cout<<"l�tfen sayinizi giriniz:";
	cin>>sayi;
	
	for(int i=1; i<=sayi; i++)
	{
		faktoriyel*=i;
		cout<<faktoriyel<<endl;
		
	}
	
	cout<<"Faktoriyel="<< faktoriyel<<endl;
}
