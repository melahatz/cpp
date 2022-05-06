#include<iostream>
using namespace std;

class Gamer{
	public:
		static int gamers;
		
		Gamer(){
			gamers++;
			cout<<"yeni oyuncu olusturuldu.."<<endl;
		}
	
};
int Gamer::gamers=0;  //class içinde ilk deger veremedik.

int main(){
	Gamer gamer1;
	Gamer gamer2;
	Gamer gamer3;
	Gamer gamer4;
	
	cout<<Gamer::gamers<<endl;
}

