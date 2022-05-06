#include<iostream>
#include<cstring>
using namespace std;

struct Kisi{
	char isim[40];
	int sicil_no;
};

void goster(const Kisi &k){
	cout<<"Ýsim:"<<k.isim<<endl;
	cout<<"Sicil no:"<<k.sicil_no<<endl;
}

int main(){
	Kisi melo;
	strcpy(melo.isim,"melo z");   //buraya dikkat et. direk alamadým structan
	melo.sicil_no=102030;
	goster(melo);
	return 0;
	
}
