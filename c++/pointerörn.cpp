#include<iostream>
using namespace std;

int main(){
	
	string food="Pizza";
	string*ptr=&food;
	
	cout<<food<<endl;
	cout<<&food<<endl;
	cout<<*ptr<<endl;
	
	*ptr="hamburger";  //Ýþaretçinin deðerini de deðiþtirebilirsiniz. Ancak bunun orijinal deðiþkenin deðerini de deðiþtireceðini unutmayýn:
	cout<<*ptr<<endl;
	cout<<food<<endl;
	
	
}
