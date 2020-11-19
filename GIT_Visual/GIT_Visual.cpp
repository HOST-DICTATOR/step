#include <iostream>
using namespace std;


#include "Name.h"

int main(int argc, char* argv[])
{
	Name myName("Ivor", "Horton");                 // Try a single object

	// Retrieve and store the name in a local char array  
	char theName[10];
	cout << "\nThe name is " << myName.getName(theName);

	// Store the name in an array in the free store
	char* pName = new char[myName.getNameLength()];
	cout << "\nThe name is " << myName.getName(pName);

	cout << endl;
        cout << endl;
        cout << endl;

//Пошли вы на хуй!!
//Ушлепаны!!
//Чумари!
//Orlando
	return 0;
}









