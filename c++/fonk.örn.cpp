#include<iostream>
using namespace std;

void carp(int a,int b){
	cout<<"carpimlar�:"<<a*b<<endl;
}
void carp(double a,double b){   //ayn� fonksiyon ama farkl� parametre g�ndererek de sonuca ula�t�k
	cout<<"carpimlari"<<a*b<<endl;
	
}
int main(){
	carp(3,8);
}
