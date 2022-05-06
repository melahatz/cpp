#include<iostream>

using namespace std;

class Nokta{
	int x,y;
	public:
		 void git(int,int );
		 void goster();
		 bool sifir_mi();
};

void Nokta::git(int yeni_x,int yeni_y){
	x=yeni_x;
	y=yeni_y;
}

void Nokta::goster(){
	cout<<"X="<<x<<", Y="<<y<<endl;
} 

bool Nokta::sifir_mi(){
	
	return(x==0)&&(y==0);
}

int main(){
	Nokta n1,n2; //nokta sýnýfýndan iki adet nesne oluþturuduk.//
	n1.git(100,50);
	n1.goster();
	n1.git(20,65);
	n1.goster(); 
	
	if (n1.sifir_mi())
		cout<<"n1 suanda sifir noktasindadir."<<endl;
		
	
	else
	cout<<"n1 suanda sifir noktasinda degildir."<<endl;
	
	n2.git(0,0);
	if (n2.sifir_mi())
	cout<<"n2 suanda sifir noktasindadir."<<endl;
	else
	cout<<"n2 suanda sifir noktasinda degildir."<<endl;
	
	 return 0;
}
