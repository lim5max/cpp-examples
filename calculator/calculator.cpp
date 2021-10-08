#include <iostream>
#include <cmath>

using namespace std; // теперь можно вывводить, вводить данные без указани€ std::

int main() {
	setlocale(LC_ALL, "Russian"); //устанавливаем кириллицу дл€ правильного отображени€ текста, 
	char op;
	float num1, num2;
	cout << "¬ведите оператор (+ - * .) ";
	cin >> op;

	cout << "¬ведите операторы: ";
	cin >> num1 >> num2; //последовательный ввод значений через пробел

	switch (op) // оператор проверки значений одной переменной
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
			cout << "Ќа ноль делить нельз€!";
		break;
		cout << num1 * num2;
	default:
		cout << "Ќеправлиный оператор";
		break;
	}
	cout << endl;
	return 0;
}