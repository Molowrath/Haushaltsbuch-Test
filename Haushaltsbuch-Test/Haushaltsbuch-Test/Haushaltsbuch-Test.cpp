#include <iostream>
#include "HighMath.h"

using namespace std;


int main(int argc, char* argv[])          // void = Nichts bzw. leer, man kann auch Klammer leer lassen
{
	int wertA, wertB;

	do
	{
		cout << "Basis [-10 bis 10]: ";
		cin >> wertA;
	} while (wertA < -10 || wertA > 10);

	do
	{
		cout << "Exponent [-10 bis 10]: ";
		cin >> wertB;
	} while (wertB < -10 || wertB > 10);

	cout << wertA << " ^ " << wertB << " = " << potenz(wertA, wertB) << endl;
	cout << wertA << " + " << wertB << " = " << addition(wertA, wertB) << endl;


	return 0;           // Rückgabewert alles größer 0 gilt ist ein Fehlernummer
}

