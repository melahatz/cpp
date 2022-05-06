#include<iostream>
using namespace std;

void carp(int a,int b){
	cout<<"carpimlarý:"<<a*b<<endl;
}
void carp(double a,double b){   //ayný fonksiyon ama farklý parametre göndererek de sonuca ulaþtýk
	cout<<"carpimlari"<<a*b<<endl;
	
}
int main(){
	carp(3,8);
}
