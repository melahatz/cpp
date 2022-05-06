#include<iostream>
using namespace std;

class deneme{
	public:
		deneme(){
			cout<<"parametresiz kurucu calisiyor.."<<endl;
		}
		deneme(const deneme &r){
			cout<<"kopyalama kurucu calisiyor.."<<endl
			;
		}
};

int main(){
	deneme a1;
	deneme a2(a1);
}
