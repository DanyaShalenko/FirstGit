#include <iostream>

using namespace std;

int main() {

	// ������ ���� ���
	double mass;
	cout << "Enter your body weight: ";
	cin >> mass;

	// ������ ������ ���
	double height;
	cout << "Enter your body height: ";
	cin >> height;

	// ������ �������� ���
	double velocity;
	cout << "Enter the velocity of the body: ";
	cin >> velocity;

	// �������� �������� ������
	double kinetic_energy = 0.5 * mass * velocity * velocity;

	// �������� ������������ ������
	double potential_energy = mass * 9.81 * height;

	// ������� ����������
	cout << "Kinetic energy: " << kinetic_energy << endl;
	cout << "Potential energy: " << potential_energy << endl;

	return 0;
}
