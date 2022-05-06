#include<iostream>
#include<string>
using namespace std;

int main(){
	string food="Pizza";   //food adlý bir degisken olusturup degerini pizzaya esitliyoruz.
	string &meal=food;     //food degerine meal referansýný atýyoruz artýk ikiside ayný adresi tutuyor.
	
	cout<<food<<endl;
	cout<<meal<<endl;
}
