#pragma once
#include <fstream>
#include "Person.h"
#include "Client.h"
#include "Validation.h"
#include "FileManager.h"


class Employee : public Person
{
protected:
	double salary = 0;
public:
	//Constructors
	Employee(string name, string password, int id, double salary)
		: Person(Validation::validName(name), Validation::validPassword(password), id),
		salary(Validation::validSalary(salary))
	{}

	//Getters
	double getSalary()
	{
		return salary;
	}
	//Setters
	void setSalary(double _salary) 
	{
		if (Validation::isValidSalary(_salary))
		{
			this->salary = _salary;
		}
		else
		{
			cout << "Invalid Salary.";
		}
	}
	//Other Methods

	void addClient(Client obj)
	{
		if (isValidClient(obj))
		{
			fstream clientFile;
			clientFile.open("Client_Database.txt", ios::app);
			if (clientFile.is_open())
			{
				clientFile << to_string(obj.getID()) + '#' + obj.getName() + '#' + obj.getPassword() + '#' + to_string(obj.getBalance()) << endl;
			}
			clientFile.close();
		}
		else
		{
			cout << "Client has invalid Properties.\n";
		}
	}

	void display()
	{
		cout << "Employee Name: " << name << endl
			<< "Employee ID: " << id << endl
			<< "Employee Salary: " << salary << endl;
	}
private:
	 static bool isValidClient(Client& obj)
	{
		if (
			Validation::isValidName(obj.getName()) &&
			Validation::isValidPassword(obj.getPassword()) &&
			Validation::isValidBalance(obj.getBalance())
			)
		{
			return true;
		}
		return false;
	}
};

