#include<iostream>

using namespace std;

int main() {
	
	int *ptr;
	int size;
	
	cout<<"kac deger sakliyacaksiniz:"<<endl;
	
	cin>>size;
	
	ptr=new int[size];
	for(int i=0; i<size; i++){
		cout<<"Deger:";
		cin>>ptr[i];
	}
	for(int i=0; i<size; i++){
		cout<<"ELEMAN:"<<ptr[i]<<endl;   //unutma.
		
	}
	return 0;
}
