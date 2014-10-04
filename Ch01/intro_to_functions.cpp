#include <iostream>

using namespace std ;

int DoPrint() {
	cout << "Running DoPrint" << endl ;
	return 0 ;
}

int main() {
	cout <<"Currently in main() " << endl ;
	DoPrint() ;
	cout << "Back in main() " << endl ;

	return 0 ;
}