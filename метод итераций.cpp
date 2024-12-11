#include <iostream>
#include <clocale>
#include <cmath>
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
    double x0, x1, e = 0.00001;
    bool flag = true;
    cout << "Введите начальное приближение: ";
    cin >> x0;
    int iterations = 0;
    do {
        x1 = x0 - f(x0) / diff(x0);
        iterations++;
        if (abs(x1 - x0) < e)
        {
            flag = false;
        }
        x0 = x1;
        cout << x1 << endl;
    } while (flag);
    cout << "Корень: " << x1 << endl;
    return 0;
}