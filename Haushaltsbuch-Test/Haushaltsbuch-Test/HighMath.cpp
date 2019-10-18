// Funktion zur Berechnung einer Potenz mit vorzeichenbehafteter Basis und Exponenten
double potenz(double basis, double exponent)
{
	double erg = 1.;

	if (exponent < 0)
	{
		for (int i = exponent; i < 0; i++)
		{
			erg = erg * (1 / basis);
		}
	}
	else
	{
		for (int i = 0; i < exponent; i++)
		{
			erg = erg * basis;
		}
	}

	return erg;
}

// Summenberechnung
double addition(double summand1, double summand2)
{
	return summand1 + summand2;
}

// Differenzberechnung
double subtraktion(double minuend, double subtrahend)
{
	return minuend - subtrahend;
}

// Produktberechnung
double multiplikation(double faktor1, double faktor2)
{
	return faktor1 * faktor2;
}

// Quotientenberechnung
double division(double dividend, double divisor)
{
	return dividend / divisor;
}