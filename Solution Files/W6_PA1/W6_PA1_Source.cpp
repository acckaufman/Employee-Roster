#include <iostream>
#include <iomanip>
#include <string>
#include "Employee.h"
using namespace std;

void displayEmployee(const Employee *e);

int main()
{
	//Create variables to hold the user's input.
	string name, department, position;
	int id;

	//For Employee 1, we will use the default constructor, which initializes all of the attributes as blank.
	//Get the information about the first employee from the user
	cout << "Please input the following information for Employee 1 now:" << endl;
	cout << "Name: ";
	getline(cin, name);
	cout << "ID Number: ";
	cin >> id;
	cin.ignore();
	cout << "Department: ";
	getline(cin, department);
	cout << "Position: ";
	getline(cin, position);

	//Create the first instance of the Employee class using the default constructor (no arguments)
	Employee employee1;

	//Since values have already been assigned to the attributes by default, and the default constructor does not accept
	//parameters, we need to manually assign the user's input to the attributes using the class member functions.
	employee1.storeName(name);
	employee1.storeID(id);
	employee1.storeDepartment(department);
	employee1.storePosition(position);

	//For Employee 2, we will use constructor #2, which accepts all four attributes as parameters
	//Get the information about the second employee from the user
	cout << endl << "Please input the following information for Employee 2 now:" << endl;
	cout << "Name: ";
	getline(cin, name);
	cout << "ID Number: ";
	cin >> id;
	cin.ignore();
	cout << "Department: ";
	getline(cin, department);
	cout << "Position: ";
	getline(cin, position);

	//Create the second instance of the Employee class using the second constructor (accepts all four arguments)
	Employee employee2(name, id, department, position);
	//At this point, the second employee's information should be filled automatically.

	//For Employee 3, we will use constructor #3, which accepts the first two attributes (name and id number) as arguments).
	//Get the information about the third employee from the user
	cout << endl << "Please input the following information for Employee 3 now:" << endl;
	cout << "Name: ";
	getline(cin, name);
	cout << "ID Number: ";
	cin >> id;
	cin.ignore();
	cout << "Department: ";
	getline(cin, department);
	cout << "Position: ";
	getline(cin, position);

	//Create the third instance of the Employee class using the third constructor (accepts the first two attributes as arguments)
	Employee employee3(name, id);

	//We must still manually assign the department and position attributes
	employee3.storeDepartment(department);
	employee3.storePosition(position);

	//All of the employee information should now be filled.

	//Prepare for display of information

	//Setup the top of the table
	cout << endl << "Employee Information:" << endl << endl;
	cout << left << setw(20) << "Name" << setw(15) << "ID Number" <<
		setw(20) << "Department" << setw(20) << "Position" << endl;
	cout << "---------------------------------------------------------------------------" << endl;

	//Since the display function requires a pointer to an Employee object, we must define one.
	Employee *ptr = nullptr;

	//Point the pointer at employee1, then have the program display the data.
	ptr = &employee1;
	displayEmployee(ptr);

	//Point the pointer at employee2, then have the program display the data.
	ptr = &employee2;
	displayEmployee(ptr);

	//Point the pointer at employee3, then have the program display the data.
	ptr = &employee3;
	displayEmployee(ptr);

	cout << endl << endl;

	//Pause and keep the window open
	system("pause");

	return 0;
}

//The display function
void displayEmployee(const Employee *e)
{
	cout << left << setw(20) << e->getName() << setw(15) << e->getID() <<
		setw(20) << e->getDepartment() << setw(20) << e->getPosition() << endl;
}