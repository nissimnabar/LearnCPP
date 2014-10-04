#include <iostream> 
// This is a preprocessor directive for the compiler to find the iostream header in a specific location
#include "add.h" 
// This is the header file for the add function in the same directory as the main.cpp

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