#include<iostream>
using namespace std;

class Employee
{
	private:
		string name;
		int age;
	public:
		void setAge(int yas){
			if(yas<0){
				cout<<"boyle bir deger veremezsiziniz.."<<endl;
			}
			else {
				age=yas;
			}
		}
		void setName(string isim){
			name=isim;
		}
		
		int getAge(){
			return age;
		}
		string getName(){
			return name;
		}
		

};

int main() {
    Employee *employee=new Employee();
    
    employee->setName("Melo");
    employee->setAge(21);
    
    cout<<employee->getName()<<endl;
    cout<<employee->getAge()<<endl;
    
	
    
	
	return 0;
}
