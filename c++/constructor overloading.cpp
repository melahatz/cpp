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
			
			Employee(string name,int salary){  //degiskenlerin clasdaki bilgi olms�n� istedi�imizden this pointer� kullan�r�z.
				this->name=name;
				this->salary=salary;
				this->id=0;
			}
			Employee(string name,int salary,int id){  //constructorr kulland���m�z i�in get ve setlere gerek duymadan tan�ml�yaca��z.
				this->name=name;
				this->salary=salary;
				this->id=id;
			}
			
			void show(){
				cout<<"�sim:"<<name<<endl;
				cout<<"Maas:"<<salary<<endl;
				cout<<"�d:"<<id<<endl;
			
			
			}
			
};

int main(){
	Employee employee1("melo",3000,3);
	Employee employee2("tugba",4000);
	Employee employee3;  //bilgi yokken contructor i�i bo� parantez yapma.
	employee1.show();
	employee2.show();
	employee3.show();
	
}
