#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<iostream>
using namespace std;

class Employee
{
	public:
	int id;
	string isim;
	int salary;
	
	void showInfos();
};


#include"Employee.cpp"
#endif


