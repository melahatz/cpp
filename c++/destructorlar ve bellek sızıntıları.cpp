#include<iostream>
using namespace std;

class Employee{
	public:
	string *name;
	int *age;
	
	Employee(string isim,int yas){
		name=new string;   //bellekte yer ay�rmay� unutma pointer olarak verdi�inde.
		age=new int;  //int tipinde new int olarak yer ay�rd�k
		
		*name=isim;
		*age=yas;
	}
	
	void show(){
	   cout<<"�sim:"<< *name<<" "<<"yas:" << *age<<endl;
	}
	
	~Employee(){
		delete name;   //yerlerini silmezsen bellekte yer hala kal�yor s�z�nt� olmamas� i�in sil.
		delete age;
		
		cout<<"destructor cal�st�.."<<endl;
	}
	
};

int main(){
	
	Employee *emp= new Employee("Melo",21);
	emp->show();   //dikkat et pointer �eklinde nokta olarak alma.
	delete emp;
}


