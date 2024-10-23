#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>
#include <limits>
using namespace std;

double task1(double x)
{
    double y;
    return y = pow(sin(x), 5) + fabs(5 * x - 1.5);
}

int task2(const int arr[], int size)
{
    int result = 0;
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] % 2 == 0)
        {
            result += arr[i];
        }
    }
    return result;
}

double f(const double x) {
    const double x1 = 10 - 5 * x;
    if (x1 < 0) {
        return numeric_limits<double>::quiet_NaN();
    }
    return 6 * pow(x, 3) + sqrt(x1);
}

int main()
{
    //TASK 1
    // double x;
    // for (int i = 0; i < 5; ++i)
    // {
    //     cout << "Enter the value of x (" << i + 1 << " of 5): ";
    //     cin >> x;
    //
    //     cout << "The value of y for x = " << x << " is: " << task1(x) << endl;
    // }


    //TASK 2
    // const int MAX_SIZE = 100;
    // int arr[MAX_SIZE];
    // int count = 0;
    // bool running = true;
    //
    // while (running)
    // {
    //     int x;
    //     cout << "Enter the values you want to sum: " << endl;
    //     cout << "If you are done, enter any negative number." << endl;
    //     cin >> x;
    //
    //     if (x >= 0)
    //     {
    //         if (count < MAX_SIZE)
    //         {
    //             arr[count++] = x;
    //         }
    //         else
    //         {
    //             cout << "Array is full." << endl;
    //             running = false;
    //         }
    //     }
    //     else
    //     {
    //         cout << task2(arr, count) << endl;
    //         running = false;
    //     }
    // }

    //TASK 3
    // double a, b, h;
    //
    // cout << "Enter the values of a, b, and h: ";
    // cin >> a >> b >> h;
    //
    // if (h <= 0) {
    //     cout << "Step size must be greater than zero!" << endl;
    //     return 1;
    // }
    //
    // cout << "-------------------------" << endl;
    // cout << ":   X   :\tY\t:" << endl;
    // cout << "-------------------------" << endl;
    //
    // for (double x = a; x <= b; x += h) {
    //     double y = f(x);
    //     if (isnan(y)) {
    //         cout << "x = " << x << " is outside the domain of the function." << endl;
    //         continue;  // Вместо break, продолжаем цикл для всех значений x
    //     }
    //     cout << ": " << setw(5) << x << " : " << setw(15) << y << " :" << endl;
    // }
    //
    // cout << "-------------------------" << endl;

}
