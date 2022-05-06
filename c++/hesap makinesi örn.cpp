#include<iostream>

using namespace std;

int main(){
	
	int a,b,islem;
	
	cout<<"Hesap makinesi programina hosgeldiniz:\n";
	
	cout<<"1.islem: Toplama islemi\n";
	cout<<"2.islem: Cýkarma islemi\n";
	cout<<"3.islem: Carpma islemi\n";
	cout<<"4.islem: Bolme islemi\n";
	
	cout<<"Yapmak istediginiz islemi seciniz:";
	cin >>islem; //buraya dikkat et .
	
	if(islem==1){
		cout<<"a degerini giriniz:";
		cin>>a;
		cout<<"b degerini giriniz:";
		cin>>b;
		cout<<"Toplam= "<<a+b;
	}
	
	else if(islem==2){
		cout<<"a degerini giriniz:";
		cin>>a;
		cout<<"b degerini giriniz:";
		cin>>b;
		cout<<"Fark= "<<a-b;
		
	}
	
	else if(islem==3){
		cout<<"a degerini giriniz:";
		cin>>a;
		cout<<"b degerini giriniz:";
		cin>>b;
		cout<<"Carpim= "<<a*b;
		
	}
	
	else if(islem==4){
		cout<<"a degerini giriniz:";
		cin>>a;
		cout<<"b degerini giriniz:";
		cin>>b;
		cout<<"Bolum= "<<a/b;
		
	}
	
	else {
		cout<<"Bir secim yapmadiniz:";
	}
	
	
}
