#include "Employee.h"
#include <string>
using namespace std;

//Default constructor, no arguments
Employee::Employee()
{
	name = " ";
	idNumber = 0;
	department = " ";
	position = " ";
}

//Constructor #2 (accepts name, id number, department, and position as arguments)
Employee::Employee(string n, int i, string d, string p)
{
	name = n;
	idNumber = i;
	department = d;
	position = p;
}

//Constructor #3 (accepts name and id number only)
Employee::Employee(string n, int i)
{
	name = n;
	idNumber = i;
	department = " ";
	position = " ";
}

//Mutator functions
void Employee::storeName(string n)
{
	name = n;
}

void Employee::storeID(int i)
{
	idNumber = i;
}

void Employee::storeDepartment(string d)
{
	department = d;
}

void Employee::storePosition(string p)
{
	position = p;
}

//Accessor functions
string Employee::getName() const
{
	return name;
}

int Employee::getID() const
{
	return idNumber;
}

string Employee::getDepartment() const
{
	return department;
}

string Employee::getPosition() const
{
	return position;
}

Employee::~Employee()
{
}
