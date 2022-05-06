#include<iostream>
using namespace std;

class Employee{
	private:
		string name;
		int salary;
		int id;
		
		public:
			Employee(){
				this->name="bilgi yok "; //this kullanarak class daki bilgi oldugunu belirttik.
				this->salary=0;
				this->id=0;
			}
			
			Employee(string name,int salary){  //degiskenlerin clasdaki bilgi olmsýný istediðimizden this pointerý kullanýrýz.
				this->name=name;
				this->salary=salary;
				this->id=0;
			}
			Employee(string name,int salary,int id){  //constructorr kullandýðýmýz için get ve setlere gerek duymadan tanýmlýyacaðýz.
				this->name=name;
				this->salary=salary;
				this->id=id;
			}
			
			void show(){
				cout<<"Ýsim:"<<name<<endl;
				cout<<"Maas:"<<salary<<endl;
				cout<<"Ýd:"<<id<<endl;
			
			
			}
			
};

int main(){
	Employee employee1("melo",3000,3);
	Employee employee2("tugba",4000);
	Employee employee3;  //bilgi yokken contructor içi boþ parantez yapma.
	employee1.show();
	employee2.show();
	employee3.show();
	
}
