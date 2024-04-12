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
	static vector<string> split(string line) //It will recieve a string, No matter from where Now !!!
	{
			vector<string> parsedData = {};
		for (int i = 0; i < 4; i++)
		{
			string temp = line.substr(0, line.find('#'));
			parsedData.push_back(temp);
			line.erase(0, (line.find('#') + 1));
		}
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

