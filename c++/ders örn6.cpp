#include<iostream>
using namespace std;

class Nokta{
	public:
		int x,y;
		void git(int, int);
		void goster();
		bool sifir_mi();
};

void Nokta::git(int yeni_x, int yeni_y){   //parametresini unutma void parametresi dönderiyor.
	x=yeni_x;
	y=yeni_y;
}
void Nokta::goster(){
	cout<<"X:"<<x<<"Y:"<<y<<endl;
}
bool Nokta::sifir_mi(){   //buraya dikkat bool böyle yazýyoruz.
	return x==0 && y==0;   //x=0 ve y=0 ise doðru anlamýnda.
}

int main(){
	Nokta n1,n2;
	n1.git(3,4);
	n1.goster();
	if (n1.sifir_mi()){  //unutma
		cout<<"n1 suanda 0 noktasindadir."<<endl;
	}
	else
	   cout<<"n1 suanda 0 noktasinda degildir"<<endl;
	
	n2.git(2,8);
	n2.goster();
	if (n2.sifir_mi()){
		cout<<"n2 suanda 0 noktasindadir"<<endl;
	}
	else
	    cout<<"n2 suanda 0 noktasinda degildir."<<endl;
}
