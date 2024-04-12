#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "FileManager.h"
using namespace std;
class Parser
{
public: //should be private
	static vector<string> split(string line) //It will recieve a string, No matter from where Now !!! also, It could be made in a loop
	{
		vector<string> parsedData = {};
		string id = line.substr(0, line.find('#'));
		parsedData.push_back(id);
		line.erase(0, (line.find('#') + 1));
		string name = line.substr(0, line.find('#'));
		parsedData.push_back(name);
		line.erase(0, (line.find('#') + 1));
		string password = line.substr(0, line.find('#'));
		parsedData.push_back(password);
		line.erase(0, (line.find('#') + 1));
		string balanceOrSalary = line.substr(0, line.length());
		parsedData.push_back(balanceOrSalary);
		return parsedData;
	}

	//static string readFromClient(int id)
	//{
	//	string line;
	//	while (getline(clientFile, line))
	//	{
	//		if (line[0] == id)
	//		{
	//			break;
	//		}
	//	}
	//	return line;
	//}
};

