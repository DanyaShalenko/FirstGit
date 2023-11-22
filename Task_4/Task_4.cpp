#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	// Constant value of the first parameter
	const double b = 3;
	const double t = 2.2;

	// Input value of the second parameter
	double a;
	double x;
	double y;

	// Calculate the value of a
	a = pow(t, 2) * b; // Corrected line

	// Calculate the value of x
	x = pow(a - b, 1.0 / 3.0);

	// Calculate the value of y
	y = a * (cos(x)) - b * (sin(x));

	// Output the values
	cout << "a = " << a << endl;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;

	return 0;
}
