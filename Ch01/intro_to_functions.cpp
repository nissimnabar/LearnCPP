#include <iostream>

using namespace std ;

// Defining a function to print its own name :P

int DoPrint() {
	cout << "Running DoPrint" << endl ;
	return 0 ;
}

// Defining the main function as always :)

int main() {
	cout <<"Currently in main() " << endl ;
	DoPrint() ;
	cout << "Back in main() " << endl ;

	return 0 ;
}