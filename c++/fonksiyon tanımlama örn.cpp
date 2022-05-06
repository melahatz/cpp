#include<iostream>

using namespace std;

	void factorial(int sayi){
		int faktoriyel=1;
		
		for(int i=2; i<=sayi; i++){
			faktoriyel*=i;
		}
		cout<<"FAKTORiYEL:"<<faktoriyel<<endl;
	}

int main(){
	int a;
	cout<<"sayiyi giriniz:";
	cin>>a;
	
	factorial(a);
}
