#pragma once
#include <string>
using namespace std;

class Employee
{
private:
	string name;		//Employee's name
	int idNumber;		//Employee's ID number
	string department;	//Department where the employee works
	string position;	//Employee's job status
public:
	//Note: all functions are defined in the file Employee.cpp, per assignment instructions

	//Default constructor (no arguments)
	Employee();

	//Constructor #2 (accepts name, id number, department, and position as arguments)
	Employee(string n, int i, string d, string p);

	//Constructor #3 (accepts name and id number only)
	Employee(string n, int i);

	//Mutator functions
	void storeName(string n);
	void storeID(int i);
	void storeDepartment(string d);
	void storePosition(string p);

	//Accessor functions
	string getName() const;
	int getID() const;
	string getDepartment() const;
	string getPosition() const;

	//Destructor
	~Employee();
};

