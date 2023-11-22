#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double y, d;

    cout << "Enter the value of a: ";
    cin >> y;

    cout << "Enter the value of b: ";
    cin >> d;

    // Перевірка області визначення
    if (y > 0 && y < 180) {
        double z = (sin(2 * y) + 0.3 * d) / (exp(y) + log(d));
        cout << "z = " << z << endl;
    }
    else {
        cout << "The expression is not defined for the given value of a " << endl;
    }

    return 0;
}
