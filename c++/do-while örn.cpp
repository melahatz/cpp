#include<iostream>

using namespace std;

int main() {
	
	string parola="12345";
	string input;
	
	do{
		cout<<"Lutfen parolanizi giriniz..";
		cin>> input;
		
		if (input!= parola)
		   cout<<"Parolanizi yanlis girdiniz..\n";
		   
	}
	while(input!= parola);
	
		cout<<"Parolanizi dogru girdiniz..";
	
}
