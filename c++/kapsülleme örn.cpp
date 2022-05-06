#include<iostream>
using namespace std;

class Employee{
	private:
		int salary;
		public:
			void setSalary(int s){
			salary=s;
			}
			int getSalary(){
				return salary;
			}
};

int main(){
	Employee maas;
	maas.setSalary(1000);
	cout<<"maasý:"<<maas.getSalary()<<endl;
}
