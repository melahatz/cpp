#include<iostream>
using namespace std;

void Test(){
	static int i=3;
	i++;
	cout<<"i degeri:"<<i<<endl;
}
int main(){
	Test();
	Test(); //static oldugundan bellekte bir defa olusucak her ca�r�ld���nda ayr� bir bellekten de�il ayn� bellekten islem yap�l�cak.
	Test();
}
