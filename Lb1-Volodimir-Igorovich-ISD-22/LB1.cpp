#include <iostream>
#include <cmath>
using namespace std;

double funcY(double a, double b)
{
    return (0.75 * sqrt(b)) - (0.5 * cbrt(a)) * sin(b * M_PI / 3);
}

int main()
{
    double a = 4.0;
    double b = 0.5;
    double a;
    double b;
    cout << "Enter a number: " << endl;
    cin >> a;
    cout << "Enter a number: " << endl;
    cin >> b;
    cout << "Function value y = f(a, b): " << funcY << endl;

    // int size = 999;
    // int array[size];

    // for (int i = 0; i < 9000; ++i)
    // {
    //     int num;
    //     cout << "Enter the num" << endl;
    //     cin >> num;
    //     if (num == 000)
    //     {
    //         break;
    //     }
    //     array[i] = num;
    //     size++;
    // }
    // for (auto y : array)
    // {
    //     cout << y << endl;
    // }
}
