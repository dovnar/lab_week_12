#include <iostream>
#include <locale.h>

using namespace std;

int summ(int, int);

int main()
{
	setlocale(LC_ALL, "rus");
	int number;
	int number2;
	cout << "ищем сумму чисел от = ";
	cin >> number;
	cout << "до  = ";
	cin >> number2;
	cout <<  " = " << summ(number, number2) << endl;
}

int summ(int number, int number2)
{
	cout << number;
	if (number < number2)
	{
		cout << " + ";
	}
	return (number != number2 ? (number + summ(number + 1, number2)) : number2);
}