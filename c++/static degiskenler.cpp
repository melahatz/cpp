#include<iostream>
using namespace std;

void Test(){
	static int i=3;
	i++;
	cout<<"i degeri:"<<i<<endl;
}
int main(){
	Test();
	Test(); //static oldugundan bellekte bir defa olusucak her caðrýldýðýnda ayrý bir bellekten deðil ayný bellekten islem yapýlýcak.
	Test();
}
