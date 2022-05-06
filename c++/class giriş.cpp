#include<iostream>

using namespace std;

class Student{
	public:
	string name;
};

int main() {
	Student student1;
	Student student2;
	student1.name="melo";
	student2.name="tugba";
	
	cout<<"Ogrenci1 ismi:"<<student1.name<<endl;
	cout<<"Ogrenci2 ismi:"<<student2.name<<endl;

}
