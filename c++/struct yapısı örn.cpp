#include<iostream>
using namespace std;

struct ulke{
	string isim;
	string parabirimi;
	int nufus;
	string baskent;
	
};

int main(int) {


	
	ulke Turkiye;
	Turkiye.isim="TURK�YE";
	Turkiye.nufus=85;
	Turkiye.parabirimi="TL";
	Turkiye.baskent="Ankara";
	
	ulke Almanya;
	Almanya.isim="Almanya";
	Almanya.nufus=80;
	Almanya.parabirimi="Euro";
	Almanya.baskent="Berlin";
	
	cout<<"�sim: "<<Turkiye.isim<<endl;
	cout<<"Nufus: "<<Turkiye.nufus<<endl;
	cout<<"ParaBirimi: "<<Turkiye.parabirimi<<endl;
	cout<<"Baskent: "<<Turkiye.baskent<<endl;
	cout<<"----------------------------------"<<endl;
	
	cout<<"�sim: "<<Almanya.isim<<endl;
	cout<<"Nufus: "<<Almanya.nufus<<endl;
	cout<<"ParaBirimi: "<<Almanya.parabirimi<<endl;
	cout<<"Baskent: "<<Almanya.baskent<<endl;
	
	return 0;
	
}
