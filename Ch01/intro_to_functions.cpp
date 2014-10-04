#include <iostream>

using namespace std ;

// Defining a function to print its own name :P

int DoPrint() {
	cout << "Running DoPrint" << endl ;
	return 0 ;
}

// Defining the main function as always :)
// Functions can be invoked multiple times as well

// The function add takes two integers as parameters 


int add(int x, int y){
	return x + y ;
}

// Forward definition of the multiply function 

int multiply(int a, int b) ;

int main() {
	cout <<"Currently in main() " << endl ;
	// Using a for loop
	for(int i = 0; i < 3 ; i ++)
	{
		cout << i + 1 << endl ;
		DoPrint() ;
	}

//	DoPrint() ;
//	DoPrint() ;
	cout << "Back in main() " << endl ;
	// Initializing and defining an integer y to hold the output of add()
	int y = add(4,5) ;
	cout << y << endl ;

	int z = multiply(add(2,3), add(4,5)) ;
	cout << add(2,3) << " x "<< add(4,5) << " = "<< z << endl ;
	return 0 ;
}

int multiply(int a, int b){
	return a*b ;
}