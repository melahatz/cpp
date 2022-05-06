#include<iostream>
using namespace std;

class Student{
	public:
	string name;
	
	void tellname(){
		cout<<"Benim adim: "<<name<<endl;
	}
};

int main() {
	Student student1;
	Student student2;
	
	student1.name="melo";
	student1.tellname();  //methodlarý da nesneyle caðýrdýgýný unutma
}
