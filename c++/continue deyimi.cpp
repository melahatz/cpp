#include<iostream>

using namespace std;

int main(){
	
	int i=0; 
	while(i<10){
		if(i==3||i==5){
			i++; // eðer artýrmazsan direk 3 den sonra döngü durur .
			continue;
		}
		
		cout<<"i:"<<i<<endl;
		i++;
	}
}
