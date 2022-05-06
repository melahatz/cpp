#include<iostream>
using namespace std;

class Employee{
	private:
		string name;
		int salary;
		int id;
		
		public:
			
			Employee(string isim,int maas,int kimlik){   //class ismi ile constructor olusturduk .
				name=isim;
				salary=maas;
				id=kimlik;
				
			}
			
			void setName(string isim){
            	name = isim;
            }
            string getName(){
            	return name;
             }
             
            void show(){
            	cout<<"isim:"<<name<<endl;
            	cout<<"Maas:"<<salary<<endl;
            	cout<<"ÝD:"<<id<<endl;
			}
					
};

int main(){
	
	Employee employee("melo",3000,2);
	employee.show();
	
}
