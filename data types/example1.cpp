#include <iostream>
using namespace std;

void sizeDataTypes() {
	cout << "������ char: " << sizeof(char) << " byte" << endl;
	cout << "������ int: " << sizeof(int) << " bytes" << endl;
	cout << "������ float: " << sizeof(float) << " bytes" << endl;
	cout << "������ double: " << sizeof(double) << " bytes" << endl;
}

int main() {
	setlocale(LC_ALL, "Russian");
	char simvol1 = 'A';
	char simvol2 = 'B';
	char simvol;

	simvol = simvol1 + simvol2;
	cout << "����������" << simvol << endl; //�����: ����������?
	sizeDataTypes();
	return 0;
}