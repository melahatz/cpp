#include<iostream>
#include<string>
using namespace std;

int main(){
	string food="Pizza";   //food adl� bir degisken olusturup degerini pizzaya esitliyoruz.
	string &meal=food;     //food degerine meal referans�n� at�yoruz art�k ikiside ayn� adresi tutuyor.
	
	cout<<food<<endl;
	cout<<meal<<endl;
}
