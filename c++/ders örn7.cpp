#include<iostream>
using namespace std; 
//KURUCU FONKSÝYONLAR

class Nokta{
	int x,y;
	
	public:
		Nokta(int,int);
		void goster();
		
};
Nokta::Nokta(int yeni_x,int yeni_y){
	cout<<"kurucu fonksiyon calisiyor.."<<endl;
	
	if(yeni_x<0){  //dikkat yenix i kontrol ediyorsun
		x=0;
	}
	else{
		x=yeni_x;
	}
	
	if(yeni_y<0){
		y=0;
	}
	else{
		y=yeni_y;
	}
}

void Nokta::goster(){
	cout<<"X:"<<x<<"Y:"<<y<<endl;
}

int main(){
	Nokta n1(10,20);   //dikkat et direk caðýrmadan içine deger yazdýn kurucu fonksiyonun
	n1.goster();
	
	Nokta n2(30,40);
	n2.goster();
	
	Nokta *n3;
	n3=new Nokta(4,5);
	n3->goster();
}



 
