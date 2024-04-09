#pragma once
#include "Person.h"
#include "Validation.h"

class Client : public Person
{
private:
	double balance = 0;
public:
	//Constructors
	Client(string name, string password, int id, double balance)
		: Person(Validation::validName(name),
			Validation::validPassword(password), id),
		balance(Validation::validBalance(balance))
	{}

	//Getters
	double getBalance()
	{
		return balance;
	}
	//Setters
	void setBalance(double _balance) 
	{
		if (Validation::isValidBalance(_balance))
		{
			this->balance = _balance;
		}
		else
		{
			cout << "Invalid Balance.";
		}
	}

	//Other Methods
	void deposit(double amount)
	{
		if (amount >= 0)
		{
			balance += amount;
		}
		else
		{
			cout << "Can't deposit a negative number";
		}
	}
	void withdraw(double amount)
	{
		if (amount < 0)
		{
			cout << "Can't withdraw a negative number";
		}
		else if (balance < amount)
		{
			cout << "Not enough balance";
		}
		else
		{
			balance -= amount;
		}
	}
	void transferTo(double amount, Client& recipient)
	{
		if (recipient.balance != -1 && this->balance != -1)
		{
			this->withdraw(amount);
			recipient.deposit(amount);
		}
		else
		{
			cout << "Invalid Balance in either account.";
		}
	}
	void checkBalance()
	{
		cout << "Balance is: " << balance;
	}
	void display()
	{
		cout << "Client Name: " << name << endl
			<< "Client ID: " << id << endl
			<< "Client Balance: " << balance << endl;
	}
};