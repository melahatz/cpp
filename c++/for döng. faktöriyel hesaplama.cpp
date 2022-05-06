#include<iostream>

using namespace std;

int main(){
	int sayi,faktoriyel=1;
	
	cout<<"lütfen sayinizi giriniz:";
	cin>>sayi;
	
	for(int i=1; i<=sayi; i++)
	{
		faktoriyel*=i;
		cout<<faktoriyel<<endl;
		
	}
	
	cout<<"Faktoriyel="<< faktoriyel<<endl;
}
