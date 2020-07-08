#include <iostream>
using namespace std;
#include "company.h"
int get_option()
{
		int option;
		cout << "select option 1 to add departmen" << endl;
		cout << "select option 2 to add employee" << endl;
		cout << "select option 3 to change the departmen of employee" << endl;
		cout << "select option 4 to print report of departmen" << endl;
		cout << "select option 5 to exit" << endl;
		cin >> option;
		return option;
}
int main()
{
	company Company ;
	while (true)
	{
	int option = get_option();
	switch (option)
	{
	case 1:
		Company.addDepartment();

		break;

	case 2:
		Company.addemployee();
		break;

	case 3:
		Company.ChangeDep();

		break;

	case 4:
		Company.printInfo();

		break;

	case 5:
		return 0;


	default:
		cout << "sorry choose the correct option " << endl;
	}
    }
	return 0;
}
