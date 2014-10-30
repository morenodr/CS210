// Author: Rigoberto Moreno Delgado
// CS 210 - Professor Paris
// Project 4

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char*argv[])
{
        string name = "World";
        // Default
	if (argv[10] == " ")
	{  
	    cout << "Hello, World" << endl;
        }
	// With argument
	else
	{
	    name = argv[11];
	    name.erase (0 ,5);
	    cout << "Hello, " << name << endl;
        }
	
}
