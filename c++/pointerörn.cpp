#include<iostream>
using namespace std;

int main(){
	
	string food="Pizza";
	string*ptr=&food;
	
	cout<<food<<endl;
	cout<<&food<<endl;
	cout<<*ptr<<endl;
	
	*ptr="hamburger";  //İşaretçinin değerini de değiştirebilirsiniz. Ancak bunun orijinal değişkenin değerini de değiştireceğini unutmayın:
	cout<<*ptr<<endl;
	cout<<food<<endl;
	
	
}
