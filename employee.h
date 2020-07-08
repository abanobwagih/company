#pragma once
#include <iostream>
#include<string>

using namespace std;

class employee
{
private:
	string employeeName;
	float salary;
	int departmentID, age;
public :
	void set_employeeName(string en);
	string get_employeeName();
	void set_salry(float s);
	float get_salary();
	void set_departmenID(int ID);
	int get_departmentID();
	void set_age(int a);
	int get_age();

};

