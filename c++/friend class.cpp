#include<iostream>
using namespace std;

class Employee{
	private:
		string name;
		int age;
		int salary;
		
		public:
		Employee(string name,int age,int salary){
			this->name=name;
			this->age=age;
			this->salary=salary;
}
		friend class Test;
		
};

class Test{
		public:
	        static void show(Employee employee){
			cout<<"Ýsim:"<<employee.name<<" "<<"yas:"<<employee.age<<" "<<"maas:"<<employee.salary<<endl;
		}
};
	
int main(){
	Employee employee("melo",21,3000);
	Test::show(employee);
}
