#include <iostream>

using namespace std;

int main() {

	// ���������� ������ ����������
	int Ax = 0, Ay = 0;
	int Bx = 13, By = 12;
	int Cx = -13, Cy = 14;

	// ��������� �������� ������� C �� ������� b
	int Cx1 = (Bx + Cx) / 2;
	int Cy1 = (By + Cy) / 2;

	// ��������� ������ ��������� �� ������� b
	int h = sqrt(pow(Cy - Cy1, 2) + pow(Cx - Cx1, 2));

	// ��������� �������� ������� C �� ������� a
	int Cx2 = (Ax + Cx) / 2;
	int Cy2 = (Ay + Cy) / 2;

	// ��������� ��������� ��������� �� ���� c
	double w = (Cy - Ay) / (Cx - Ax);

	// �������� ����������
	cout << "Height= " << h << endl;
	cout << "Bisector = " << w << endl;

	return 0;
}
