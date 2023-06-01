#include <iostream>
using namespace std;
#include "CarS4.h"
#include "SUVS4.h"
int main() {
	Car* newSUV = new SUV();

	// A = B + C
	Car* B = new Car(50, 4, 20000);
	Car* C = new Car(30, 4, 15000);
	cout << endl;
	Car A = *B + *C;
	// print out the result
	cout << "B info" << endl;
	cout << *B << endl;
	cout << "C info" << endl;
	cout << *C << endl;
	cout << "A = B + C" << endl;
	cout << A << endl << endl;

	std::cout << "with virtual \n";
	newSUV->airconditioner(25);
	delete newSUV;

	getchar();
	return 0;
}