// quant-library.cpp : Defines the entry point for the application.
//

#include "quant-library.h"
#include "hedging.h"
using namespace std;

int main()
{
	Basis basis_1;
	basis_1.set_basis(2.3, 2.35);
	cout << basis_1.get_basis() << endl;
	cout << "Hello CMake." << endl;
	return 0;
}
