#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	double e = 0.000001, a = 0, b = 1, c;
	while (abs(a - b) >= e)
	{
		c = (b + a) / 2;
		if ((sqrt(1 - 0.4 * pow(a, 2)) - asin(a)) * (sqrt(1 - 0.4 * pow(c, 2)) - asin(c)) < 0)
		{
			b = c;
		}
		else
		{
			a = c;
		}
		cout << "Промежуточное значение: " << c << endl;
	}
	cout << "Корень: " << a;
	return 0;
}