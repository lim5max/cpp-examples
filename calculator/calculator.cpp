#include <iostream>
#include <cmath>

using namespace std; // ������ ����� ���������, ������� ������ ��� �������� std::

int main() {
	setlocale(LC_ALL, "Russian"); //������������� ��������� ��� ����������� ����������� ������, 
	char op;
	float num1, num2;
	cout << "������� �������� (+ - * .) ";
	cin >> op;

	cout << "������� ���������: ";
	cin >> num1 >> num2; //���������������� ���� �������� ����� ������

	switch (op) // �������� �������� �������� ����� ����������
	{
	case '+':
		cout << num1 + num2;
		break;
	case '-':
		cout << num1 - num2;
		break;
	case '*':
		cout << num1 * num2;
		break;
	case '/':
		if (num2 != 0)
			cout << num1 / num2;
		else
			cout << "�� ���� ������ ������!";
		break;
		cout << num1 * num2;
	default:
		cout << "����������� ��������";
		break;
	}
	cout << endl;
	return 0;
}