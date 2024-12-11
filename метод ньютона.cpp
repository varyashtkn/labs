#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;
double f(double x)
{
	return sqrt(1 - 0.4 * x * x) - asin(x);
}
double diff(double x)
{
	return (-0.4 * x) / sqrt(1 - 0.4 * x * x) - 1 / sqrt(1 - x * x);
}
int main()
{
	setlocale(LC_ALL, "rus");
	double x0, x;
	cout << "Введите приблизительное значение корня: ";
	cin >> x;
	double e = 0.000001;
	do
	{
		x0 = x;
		x = x0 - f(x) / diff(x);
		cout << "Промежуточное значение: " << x << endl;
	} while (fabs(x0 - x) >= e);
	cout << "Найденный корень: " << x;
	return 0;
}
