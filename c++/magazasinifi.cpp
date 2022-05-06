#include<iostream>
using namespace std;

class Sweat{
	public:
		string renk;
		string beden;
		
};

class Pantolon{
	public:
	string renk;
	string beden;
};

class Ayakkabi{
	public:
	string renk;
	int numara;
	string model;
	
};

class Canta{
	public:
	string renk;
	string boy;
	
};

int main(){
	Sweat sweat;
	
	sweat.renk="mavi";
	sweat.beden="medium";
	
	
	Pantolon pantolon;
	pantolon.renk="siyah";
	pantolon.beden="40";
	
	Ayakkabi ayakkabi;
	ayakkabi.model="spor";
	ayakkabi.renk="siyah";
	ayakkabi.numara=38;
	
	Canta canta;
	canta.renk="siyah";
	canta.boy="buyuk";
	
	cout<<"-------------Magazamiza Hosgeldiniz----------------"<<endl;
	cout<<"Sweat siparisiniz:"<<"renk->"<<sweat.renk<<" ,"<<"beden->"<<sweat.beden<<endl;
	cout<<"Pantolon siparisiniz:"<<"renk->"<<pantolon.renk<<","<<"beden->"<<pantolon.beden<<endl;
	cout<<"Ayakkabi siparisiniz:"<<"model->"<<ayakkabi.model<<","<<"renk->"<<ayakkabi.renk<<","<<"numara->"<<ayakkabi.numara<<endl;
	cout<<"Canta siparisiniz:"<<"renk->"<<canta.renk<<","<<"boy->"<<canta.boy<<endl;
	
	cout<<endl<<endl;
	
	cout<<"iyi gunlerde kullanmaniz dilegiyle.."<<endl;
	
	
}

