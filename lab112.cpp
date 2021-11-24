// lab112.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    int a, b, c, Sum;
    cout << "Введите три числа: " << endl;
    cin >> a >> b >> c;
    Sum = a + b + c; 
    a = min(a, b);
    c = min(a, c);
    cout << "Сумма двух наибольших из них: " << Sum - c;
    return 0;
}