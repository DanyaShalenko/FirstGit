#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double a, b;

	cout << "Enter the value of a: ";
	cin >> a;

	cout << "Enter the value of b: ";
	cin >> b;

	double z1 = (sin(a) + cos(2 * b - a)) / (cos(a) - sin(2 * b - a));

	cout << "z1 = " << z1 << endl;

	return 0;
}
