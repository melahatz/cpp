#include<iostream>
using namespace std;

struct Employee{
	int id;
	string isim;
	string departmant;
};

void show(Employee *employee){
    employee->id= 30; //de�i�tirirken referans ile de�i�tir
	cout<<"ID :"<<employee->id<<endl;
	cout<<"�S�M: "<<employee->isim<<endl;
	cout<<"DEPARTMANT: "<< employee->departmant<<endl;
}
void showEmployee(Employee employee){
	cout<<"ID :"<<employee.id<<endl;
	cout<<"�S�M: "<<employee.isim<<endl;
	cout<<"DEPARTMANT: "<<employee.departmant<<endl;
}

int main(){
	Employee employee1{ 12 , "melo", "Bilgisayar Muhendisligi"};
	
	show(&employee1); //degeri degistirirken referasns� unutma.
	
}
