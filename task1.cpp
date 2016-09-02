#include <iostream>
#include <locale.h>
using namespace std;
int exponent(int, int);
int main()
{
	setlocale(LC_ALL, "rus");
	int number;
	int extent;
	cout << "введите число = ";
	cin >> number;
	cout << "введите степень числа = ";
	cin >> extent;
	cout << number << " в степени " << extent << " = " << exponent(number, extent) << endl;
}




int exponent(int number, int extent)
{
	return (extent > 0 ? (number * exponent(number, extent - 1)) : 1);
}