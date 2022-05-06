#include<iostream>
using namespace std;

class Employee{
	public:
	string *name;
	int *age;
	
	Employee(string isim,int yas){
		name=new string;   //bellekte yer ayýrmayý unutma pointer olarak verdiðinde.
		age=new int;  //int tipinde new int olarak yer ayýrdýk
		
		*name=isim;
		*age=yas;
	}
	
	void show(){
	   cout<<"Ýsim:"<< *name<<" "<<"yas:" << *age<<endl;
	}
	
	~Employee(){
		delete name;   //yerlerini silmezsen bellekte yer hala kalýyor sýzýntý olmamasý için sil.
		delete age;
		
		cout<<"destructor calýstý.."<<endl;
	}
	
};

int main(){
	
	Employee *emp= new Employee("Melo",21);
	emp->show();   //dikkat et pointer þeklinde nokta olarak alma.
	delete emp;
}


