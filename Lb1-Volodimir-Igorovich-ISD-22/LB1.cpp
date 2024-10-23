#include <iostream>
#include <cmath>
using namespace std;

double func1(const double a, const double b)
{
    double d = pow(pow(a, 2) / pow(b, 3), 2.0 / 3.0);
    double e = exp(0.807 * (1 - pow(sin((a - b) * (M_PI / 4)), 2)) / 0.312 * (1 + pow(cos((b + a) * (M_PI / 4)), 2)));
    return d * e;
}

double func2(double a, double b)
{
    double d = (a - b) / (b + a);
    double e = exp(log(cos(a - b) * (M_PI / 8)) / 0.137);
    return cbrt(d * e);
}

int main()
{
    int size = 1;
    int array[size];

    for (int i = 0; i < 9000; ++i)
    {
        int num;
        cout << "Enter the num" << endl;
        cin >> num;
        if (num == 000)
        {
            break;
        }
        array[i] = num;
        size++;
    }
    for (auto y : array)
    {
        cout << y << endl;
    }
}

// double a;
// double b;
// cout << "Enter a number: ";
// cin >> a;
// cout << "Enter a number: ";
// cin >> b;
// // cout << "Result: " << func1(a, b);
// cout << "Result: " << func2(a, b);
