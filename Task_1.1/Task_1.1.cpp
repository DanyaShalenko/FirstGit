#include <iostream>

using namespace std;

int main() {
	// Введіть діаметр кола
	int diameter;
	cout << "Enter the diameter of the circle: ";
	cin >> diameter;

	// Обчисліть радіус кола
	int radius = diameter / 2;

	// Обчисліть довжину кола
	double circumference = 2 * 3.14159 * radius;

	// Обчисліть площу круга
	double area = 3.14159 * radius * radius;

	// Виведіть результати
	cout << "Circuit: " << circumference << endl;
	cout << "Area of a circle: " << area << endl;

	return 0;
}
//Спочатку програма просить користувача ввести діаметр кола.
//Потім програма обчислює радіус кола, поділивши діаметр на 2.
//Далі програма обчислює довжину кола, помноживши радіус на 2 * 3.14159.
//Нарешті, програма обчислює площу круга, помноживши радіус на себе і на 3.14159.
//Наприкінці програма виводить результати на екран.
