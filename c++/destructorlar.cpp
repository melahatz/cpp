#include<iostream>
using namespace std;

class Employee{
	
	public:
		
	Employee(){
		cout<<"constructor cagrildi.."<<endl;
		
	}
	
	~Employee(){
		cout<<"destructor cagrildi.."<<endl;
	}
};         	

int main(){
	Employee *emp= new Employee;
	delete emp;
	
	return 0;
}
