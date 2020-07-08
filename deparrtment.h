#pragma once
#include <iostream>
#include<string>

using namespace std;

class deparrtment
{
private:
	string departmentName,managerName;
	int departmentID;
public :
	void set_departmentName(string dn);
	string get_departmentName();
	void set_departmentID(int dID);
	int get_departmentID();
	void set_managerName(string mn);
	string get_managerName();


};

