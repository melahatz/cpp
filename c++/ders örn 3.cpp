#include<iostream>
using namespace std;

struct ComplexT{
	float re,im;
};

void print(float deger){
	cout<<"deger :"<<deger<<endl;
}

void print(ComplexT a){
	cout<<"reel kisim: "<<a.re<<"sanal kisim:"<<a.im<<endl;
	
}
void print(float deger,char c){
	cout<<"deger: "<<deger<<"char:"<<c<<endl;
}

int main(){
	ComplexT z;
	z.re;
	z.im;
	print(3.2);
	print(z);
	print(2.1,'S');
	
	return 0;
}
