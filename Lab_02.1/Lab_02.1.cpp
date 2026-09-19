// Lab_02.1.cpp 
// Самотуга Андрій 
// Лабораторна робота № 2. 
// Лінійні програми. 
// Варіант 26
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a; // Вхідний параметр
	double z1;// Результат обчислення 1-го виразу
	double z2;// Результат обчислення 2-го виразу
	cout << "Enter a="; cin >> a;
	z1 = cos(a) + cos(2 * a) + cos(6 * a) + cos(7 * a);
	z2 = 4 * cos(a / 2) * cos((5.0 / 2) * a) * cos(4 * a);
	cout << "z1=" << z1 <<'\n';
	cout << "z2=" << z2; 

	return 0;

  
}

