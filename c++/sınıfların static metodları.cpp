#include<iostream>
using namespace std;

class Matematik{
	
	public:
		static void kup(int x){
			cout<<x*x*x<<endl;
			
		}
		static void toplam(int x){
			cout<<x+2<<endl;
			
		}
};

int main(){
	Matematik::kup(3);
	Matematik::toplam(2);
}
