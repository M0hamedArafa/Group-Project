#include <iostream>
#include "Client.h"
#include "Admin.h"
#include "FileManager.h";
using namespace std;

int main()
{
	Client* x = new Client("Micheal", "12345678", 1, 5000);
	Client* y = new Client("Stevens", "654321", 2, 10000);
	Employee* z = new Employee("Franklin", "87654321", 3, 100000);

	//z.addClient(x);

	FileManager::addClient(*x);
}
	////Checking Validation in Constructors.
	//Client x("Micheal", "123456", 1, 5000);
	//x.display();
	//cout << "\n============\n";

	//Client y("hhh", "15", 2, 50);
	//y.display();
	//cout << "\n============\n";

	//Employee a("Franklin", "123456", 3, 8000);
	//a.display();
	//cout << "\n============\n";

	//Employee b("Trev", "123", 4, 200);
	//b.display();
	//cout << "\n============\n";

	////Checking Client Methods.
	//x.setName("Micheal Phillips");
	//x.withdraw(1000);
	//x.transferTo(500, y);