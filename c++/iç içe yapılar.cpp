#include<iostream>
using namespace std;

struct Adress{
	
	string cityname;
	int no;

};
struct Employee{
	int id;
	string isim;
	string departmant;
	Adress adress; //i� i�e yap� olusturduk adress structan adress isimde .
};


int main(){
	Employee employee={12, "melo","Bilgisayar muhendisligi",{"Kayseri", 5}};
	cout<<"ID:"<< employee.id<<endl;
	cout<<"isim:"<<employee.isim<<endl;
	cout<<"departmant:"<<employee.departmant<<endl;
	cout<<"adress:"<<employee.adress.cityname<<endl;  //butada employee structan adresi ald�k Adress sturctan cityname ula�t�k.
		cout<<"adress:"<<employee.adress.no<<endl;  //butada employee structan adresi ald�k Adress sturctan no ula�t�k.

	
	
	
}
