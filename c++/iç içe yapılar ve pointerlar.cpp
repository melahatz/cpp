#include<iostream>
using namespace std;

struct Address{
	string cityname;
	int no;
};

struct Employee{
	int id;
	string isim;
	string departmant;
	Address *address; //adress structan bir adres pointer� tan�mlad�k. 
};

int main(){
	Employee employee;
	employee.id=12;
	employee.isim="melo";
	employee.departmant="bilgisayar muhendisligi";
	
	Address adress={"Kayseri",5}; //address tipinden adres isimli bir obje olusturduk.
	
	employee.address=&adress;   //adressini employee adres pointer�na verdik
	
	Employee *ptr= &employee;// EMPLOYEE T�R�NDE PO�NTER OLUSTURUP employee nin adresini employee verdik.
	
    cout<<"City name: "<< ptr->address->cityname<<endl;
    cout<<"No:"<< ptr->address->no<<endl;
	
}
