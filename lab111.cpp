// lab111.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "Введите значения a и b:" << endl;
	cin >> a >> b;
	if (a == b)
	{
		a = 0;
		b = 0;
	}
	else
	{
		a = max(a, b);
		b = max(a, b);
	}
	cout << "Новые значения:" << endl;
	cout << a <<" "<< b;

	return 0;
}
