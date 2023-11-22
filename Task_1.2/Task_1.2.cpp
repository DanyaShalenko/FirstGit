#include <iostream>

using namespace std;

int main() {

	// ¬вед≥ть масу т≥ла
	double mass;
	cout << "Enter your body weight: ";
	cin >> mass;

	// ¬вед≥ть висоту т≥ла
	double height;
	cout << "Enter your body height: ";
	cin >> height;

	// ¬вед≥ть швидк≥сть т≥ла
	double velocity;
	cout << "Enter the velocity of the body: ";
	cin >> velocity;

	// ќбчисл≥ть к≥нетичну енерг≥ю
	double kinetic_energy = 0.5 * mass * velocity * velocity;

	// ќбчисл≥ть потенц≥альну енерг≥ю
	double potential_energy = mass * 9.81 * height;

	// ¬ивед≥ть результати
	cout << "Kinetic energy: " << kinetic_energy << endl;
	cout << "Potential energy: " << potential_energy << endl;

	return 0;
}
