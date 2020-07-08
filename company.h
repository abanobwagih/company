#pragma once
#include <iostream>
#include<string>
#include "deparrtment.h"
#include "employee.h"
using namespace std;

class company
{
private :
	employee employees[100];
	deparrtment department[100];
	int numberOfEmployees, nnumberOfDepartments;
public :
	void addDepartment();
	void addemployee();
	void ChangeDep();
	void printInfo();
	company();


};

