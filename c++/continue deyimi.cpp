#include<iostream>

using namespace std;

int main(){
	
	int i=0; 
	while(i<10){
		if(i==3||i==5){
			i++; // e�er art�rmazsan direk 3 den sonra d�ng� durur .
			continue;
		}
		
		cout<<"i:"<<i<<endl;
		i++;
	}
}
