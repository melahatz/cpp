#include<iostream>
using namespace std;

int main(){
	
	string food="Pizza";
	string*ptr=&food;
	
	cout<<food<<endl;
	cout<<&food<<endl;
	cout<<*ptr<<endl;
	
	*ptr="hamburger";  //��aret�inin de�erini de de�i�tirebilirsiniz. Ancak bunun orijinal de�i�kenin de�erini de de�i�tirece�ini unutmay�n:
	cout<<*ptr<<endl;
	cout<<food<<endl;
	
	
}
