#include <iostream>

using namespace std;

int main() {
	// ������ ������ ����
	int diameter;
	cout << "Enter the diameter of the circle: ";
	cin >> diameter;

	// �������� ����� ����
	int radius = diameter / 2;

	// �������� ������� ����
	double circumference = 2 * 3.14159 * radius;

	// �������� ����� �����
	double area = 3.14159 * radius * radius;

	// ������� ����������
	cout << "Circuit: " << circumference << endl;
	cout << "Area of a circle: " << area << endl;

	return 0;
}
//�������� �������� ������� ����������� ������ ������ ����.
//���� �������� �������� ����� ����, �������� ������ �� 2.
//��� �������� �������� ������� ����, ���������� ����� �� 2 * 3.14159.
//������, �������� �������� ����� �����, ���������� ����� �� ���� � �� 3.14159.
//��������� �������� �������� ���������� �� �����.
