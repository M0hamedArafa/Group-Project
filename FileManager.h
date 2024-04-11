#pragma once
#include "DataSourceInterface.h"
#include "Client.h"
#include "Admin.h"
#include <fstream>
#include <string>

class FileManager
{
public:
	static void addClient(Client obj)
	{
		fstream clientFile;
		clientFile.open("Client_Database.txt", ios::app);
		if (clientFile.is_open())
		{
			clientFile << to_string(obj.getID()) + '#' + obj.getName() + '#' + obj.getPassword() + '#' + to_string(obj.getBalance()) << endl;
		}
		clientFile.close();
	}
	 //void addEmployee(Employee& obj)
	 //{
		// fstream employeeFile;
		// employeeFile.open("Employee_Database.txt", ios::app);
		// if (employeeFile.is_open())
		// {
		//	 employeeFile << to_string(obj.getID()) + '#' + obj.getName() + '#' + obj.getPassword() + '#' + to_string(obj.getSalary()) << endl;
		// }
		// employeeFile.close();
	 //}
	 //void addAdmin(Admin& obj) 
	 //{
		// fstream adminFile;
		// adminFile.open("Admin_Database.txt", ios::app);
		// if (adminFile.is_open())
		// {
		//	 adminFile << to_string(obj.getID()) + '#' + obj.getName() + '#' + obj.getPassword() + '#' + to_string(obj.getSalary()) << endl;
		// }
		// adminFile.close();
	 //}
	 //vector<Client> getAllClients() 
	 //{

	 //}
	 //vector<Employee> getAllEmployees() 
	 //{

	 //}
	 //vector<Admin> getAllAdmins() 
	 //{

	 //}
	 //void removeAllClients() 
	 //{

	 //}
	 //void removeAllEmployees() 
	 //{

	 //}
	 //void removeAllAdmins() 
	 //{

	 //}

};

