#include <iostream>
#include "Client.h"
#include "Admin.h"
#include "FileManager.h"
using namespace std;

int main()
{
	Client x("Micheal", "12345678", 1, 5000);
	Client y("Stevens", "12345678", 2, 10000);
	Employee z("Franklin", "87654321", 3, 100000);
	cout << Validation::isValidPassword(y.getPassword());
	cout << Validation::validPassword(y.getPassword());
	
}
	 //z.addClient(x);
	 //z.addClient(y);
	 //cout << z.isValidClient(y);