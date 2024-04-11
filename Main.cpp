#include <iostream>
#include "Client.h"
#include "Admin.h"
#include "FileManager.h";
using namespace std;

int main()
{
	Client x("Micheal", "12345678", 1, 5000);
	Client y("Stevens", "654321", 2, 10000);
	Employee z("Franklin", "87654321", 3, 100000);

	z.addClient(x);
}