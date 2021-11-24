// lab116.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	cout << "Введите число:"<<endl;
	int x;
	cin >> x;
	if (x % 2 == 0) 
	{
		cout << "Четное ";
	}
	else
	{ 
		cout << "Нечетное ";
	}

	if (x >= 10)
	{
		if (x >= 100)
		{
			cout << "трехзначное ";
		}
		else
		{
			cout << "двузначное ";
		}
	}
	if (x < 10)
	{
		cout << "однозначное ";
	}
	cout << "число";
	return 0;
}