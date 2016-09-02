#include <iostream>
#include <locale.h>
using namespace std;
int star(int);
int main()
{
	setlocale(LC_ALL, "rus");
	int number;
	cout << "введите количество звёзд = ";
	cin >> number;
	star(number);
}

int star(int number)
{
	if (number > 0)
	{
		cout << "*";
		return star(number - 1);
	}
	cout << endl;
}