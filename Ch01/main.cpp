#include <iostream>
#include "add.h" // This is the header file for the add function

using namespace std ;
// int add (int x, int y) ;

int main(){
	// Getting user input for the integer values
	int a, b;
	cout <<"Enter an integer " <<endl ;
	cin >>  a ;
	cout <<"Enter an integer " <<endl ;
	cin >>  b ;

	cout << "The sum of "<< a <<" and "<< b <<" is: " << add(a,b) << endl ;
	return 0;
}