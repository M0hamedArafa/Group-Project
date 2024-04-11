#pragma once
#include <iostream>
#include "Validation.h"
using namespace std;


class Person
{
protected:
	string name, password;
	int id = 0;
public:
	//Constructor
	Person(string name, string password, int id)
		: name(Validation::validName(name)), password(Validation::validPassword(password)), id(id)
	{}
	//Getters
	virtual string getName()
	{
		return name;
	}
	virtual string getPassword()
	{
		return password;
	}
	virtual int getID()
	{
		return id;
	}

	//Setters 
	void setName(string _name)
	{
		if (Validation::isValidName(_name))
		{
			this->name = _name;
		}
		else
		{
			cout << "Invalid Name.";
		}
	}
	void setPassword(string _password)
	{
		if (Validation::isValidPassword(_password))
		{
			this->password = _password;
		}
		else
		{
			cout << "Invalid Password.";
		}
	}
	void setID(int id)
	{
		this->id = id;
	}


	virtual void display() = 0;
};