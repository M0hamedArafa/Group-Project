#pragma once
#include "Employee.h"
#include "Validation.h"
#include "FileManager.h"
class Admin : public Employee
{
public:
	Admin(string name, string password, int id, double salary)
		: Employee(Validation::validName(name), Validation::validPassword(password), id,
			Validation::validSalary(salary))
	{}

	void display()
	{
		cout << "Admin Name: " << name << endl
			<< "Admin ID: " << id << endl
			<< "Admin Salary: " << salary << endl;
	}

};

