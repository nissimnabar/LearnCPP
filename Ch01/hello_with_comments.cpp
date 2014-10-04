#include <iostream> // Preprocessor directive

using namespace std ; //Defining the namespace

// Every C++ program must have a main() function 

int main()
{
	cout << "Hello World! " << endl ; // Now we need not put std:: 
	cout << 2 + 3 << endl; // Calculating the sum of 2 and 3

	int x ;
	cout << "Enter an integer " << endl ;
	cin >> x ;
	cout << "You entered " << x <<endl ;


	return 0 ; // Return value of 0 means everything went OK
}