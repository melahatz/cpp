#include<iostream>
using namespace std;

class deneme{
	public:
		
	deneme();
	deneme(int);
	deneme(int,int);
	~deneme();
	
};

deneme::deneme(){
	cout<<"parametresiz kurucu calisti"<<endl;
	
}
deneme::deneme(int a, int b){
	cout<<"iki parametreli kurucu calisti:"<<endl;
}

deneme::deneme(int a){
	cout<<"parametreli kurucu calisti:"<<endl;
}

deneme::~deneme(){

	cout<<"yikici fonksiyon calisti:"<<endl;   //delete kullanma sadece ptr de kullan.
}

int main(){
	deneme d1;
	deneme d2(3);
	deneme d3(2,5);
	
	
}
