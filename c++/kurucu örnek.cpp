#include<iostream>
using namespace std;

class Siniflist{
	public:
	string ad;
	string soyad;
	int yas;
	int boy;
	int kilo;
	
	void goster();
	
	Siniflist();
    Siniflist(string,string);
	Siniflist(string, string , int ,int , int);

};

Siniflist::Siniflist(){
	this->ad="bilinmiyor";
	this->soyad="bilinmiyor";
	this->yas=0;
	this->boy=0;
	this->kilo=0;
}

Siniflist::Siniflist(string ad, string soyad,int yas, int kilo,int boy){
	this->ad=ad;
	this->soyad=soyad;
	this->yas=yas;
	this->kilo=kilo;
	this->boy=boy;
	
}
Siniflist::Siniflist(string ad, string soyad){
	this->ad=ad;
	this->soyad=soyad;
	this->yas=0;
	this->boy=0;
	this->kilo=0;
}
void Siniflist::goster(){
	cout<<"ogrencinin adi"<<ad<<endl;
	cout<<"ogrencinin soyadi"<<soyad<<endl;
	cout<<"ogrencinin yasi"<<yas<<endl;
	cout<<"ogrencinin boyu"<<boy<<endl;
	cout<<"ogrencinim kilosu"<<kilo<<endl;
}

int main(){
	Siniflist ogrenci1("melo","zýkkelleci");
	Siniflist ogrenci2("melo","zýkkelleci",21,1.65,65);
	Siniflist ogrenci3;
	
	
	ogrenci1.goster();
	ogrenci2.goster();
	ogrenci3.goster();
}
