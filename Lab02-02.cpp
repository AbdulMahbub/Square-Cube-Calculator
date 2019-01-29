//==========================================================
//
// Title:      Lab02-02
// Course:     CSC 1101
// Lab Number: Lab02-02
// Author:     Abdul Mahbub
// Date:       January 17, 2019
// Description: Square and Cubic Calculator
//
//==========================================================
#include <conio.h> // For function getch()
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

int main()
{

  // Declare variables
	int num = 4;
  
  // Show application header
  cout << "Welcome to Square and Cubic Calculator" << endl;
  cout << "--------------------------------------" << endl << endl;

  // Calculate and show square and cube
  cout << "For number " << num 
    << ", the square is " << num * num 
    << ", and the cube is " << num * num * num
    << "." << endl;

  cout << endl;
  int x = 7;
  int y = 4;
  double z;

  z = (double)x / y;

  cout << z << endl;


  // Show application close
  cout << "\nEnd of Square and Cubic Calculator" << endl << endl;

  // Pause before application window closes
  cout << "Press any key to exit ..." << endl;
  _getch();

}
