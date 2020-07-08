#include "company.h"

void company::addDepartment()
{
	int departmentId;
	string managername, name;

	cout << "please enter the department ID " << endl;
	cin >> departmentId;
	cout << "please enter the department name " << endl;
	cin >> name;
	cout << "please enter the manager name " << endl;
	cin >> managername;

	deparrtment departments;
	departments.set_departmentID(departmentId);
	departments.set_departmentName(name);
	departments.set_managerName(managername);

	department[nnumberOfDepartments] = departments;
	nnumberOfDepartments++;

}

void company::addemployee()
{
	string employeName;
	float salari;
	int DepartmentID, ag;

	cout << "please enter the employee name";
	cin >> employeName;
	cout << "please enter the employee derpartment id";
	cin >> DepartmentID;
	cout << "please enter employee's salary";
	cin >> salari;
	cout << "please enter the employee's age";
	cin >> ag;

	employee employe;
	employe.set_employeeName(employeName);
	employe.set_departmenID(DepartmentID);
	employe.set_salry(salari);
	employe.set_age(ag);

	employees[numberOfEmployees] = employe;
	numberOfEmployees++;


}

void company::ChangeDep()
{
	string employeename;
	int DepartmentID;

	cout << "please enter the employee name";
	cin >> employeename;
	cout << "please enter the employee derpartment id";
	cin >> DepartmentID;

	for (int i = 0; i < numberOfEmployees; i++)
	{
		if (employees[i].get_employeeName == employeename)
		{
			employees[i].set_departmenID(DepartmentID);
			break; 
		}
	}
}

void company::printInfo()
{
	for (int i = 0; i < nnumberOfDepartments; i++)
	{
		deparrtment currentdepartment = department[i];
		int employeesCount = 0;
		for (int j = 0; j < numberOfEmployees; j++)
		{
			if (employees[j].get_departmentID()==currentdepartment.get_departmentID())
			{
				employeesCount++;
			}
		}
		if (employeesCount == 1)
		cout << currentdepartment.get_departmentName << " has " << employeesCount << "employee "<< endl;
		else 
		cout << currentdepartment.get_departmentName << " has " << employeesCount << "employees" << endl;
	}
}

company::company() : numberOfEmployees(0), nnumberOfDepartments(0)
{

}
