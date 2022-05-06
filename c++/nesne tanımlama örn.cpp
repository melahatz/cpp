#include<iostream>
using namespace std;

class Car{
	public:
		
	string renk;
	string model;
    int yil;
    
    void show(){  //eger fonksiyonun prototipini burda tanýmlayýp class dýþýnda fonksiyonu yazmak isteseyedin :: opr kullanrak {void Car::show()} olarak yazardýn
	cout<<"arabanin rengi:"<<renk<<endl;
	cout<<"arabanin modeli: "<<model<<endl;
	cout<<"arabanin yili:"<<yil<<endl;
	}
};

int main(){
	Car car1;
	Car car2;
	
	car1.model="BMW";
	car1.renk="mavi";
	car1.yil=2000;
	car1.show();
	
	car2.model="range rower";
	car2.renk="siyah";
	car2.yil=2002;
	car2.show();
}

