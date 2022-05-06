#include<iostream>
using namespace std;

void hesap(int &j){
	
	j=j*2;
	cout<<j<<endl;
}

int main(){
	int i=5;
	hesap(i);
}
