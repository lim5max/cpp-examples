#include <iostream>
using namespace std;

void sizeDataTypes() {
	cout << "Размер char: " << sizeof(char) << " byte" << endl;
	cout << "Размер int: " << sizeof(int) << " bytes" << endl;
	cout << "Размер float: " << sizeof(float) << " bytes" << endl;
	cout << "Размер double: " << sizeof(double) << " bytes" << endl;
}

int main() {
	setlocale(LC_ALL, "Russian");
	char simvol1 = 'A';
	char simvol2 = 'B';
	char simvol;

	simvol = simvol1 + simvol2;
	cout << "Получилось" << simvol << endl; //Вывод: Получилось?
	sizeDataTypes();
	return 0;
}