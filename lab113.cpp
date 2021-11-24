
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    cout << "Введите точку А : ";
    int  a, a1, b1, c1, b, c;
    cin >> a >> a1;
    cout << "Введите точку В : ";
    cin >> b >> b1;
    cout << "Введите точку С : ";
    cin >> c >> c1;
    if (sqrt(pow(abs(a - c), 2) + pow(abs(a1 - c1), 2)) > sqrt(pow(abs(a - b), 2) + pow(abs(a1 - b1), 2))) {
        cout << "Точка В ближе к точке А , отезок АВ равен : ";
        cout << sqrt(pow(abs(a - b), 2) + pow(abs(a1 - b1), 2)) << endl;
    }
    else if (sqrt(pow(abs(a - c), 2) + pow(abs(a1 - c1), 2)) < sqrt(pow(abs(a - b), 2) + pow(abs(a1 - b1), 2))) {
        cout << "Точка C ближе к точке А , отезок АC равен : ";
        cout << sqrt(pow(abs(a - c), 2) + pow(abs(a1 - c1), 2)) << endl;
    }
    else {
        cout << "AC = AB = " << abs(a - c) << endl;
    }
    return 0;
}

