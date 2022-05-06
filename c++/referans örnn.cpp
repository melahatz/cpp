#include<iostream>
using namespace std;

void noDegistir(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}

int main(){
	int ilksayi=10;
	int ikincisayi=20;
	
	cout<<"degisim yapmadan once:"<<ilksayi<<ikincisayi<<endl;
	
	noDegistir(ilksayi,ikincisayi);
	cout<<"degisim yaptiktan sonra"<<ilksayi<<ikincisayi<<endl;
}

