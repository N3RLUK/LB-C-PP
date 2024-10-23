#include <iostream>
#include <cmath>
using namespace std;

double calculateY(double x, double y) {
    if (x <= 0) {
        return pow(x, 2) - sin(y);
    } else {
        return sqrt(x) + cos(y);
    }
}

bool isInsideShadedArea(double x, double y) {
    return (x >= 0 && x <= 2 && y >= 1 && y <= 2);
}

int main()
{
    double x, y;

    cout << "Введите x: ";
    cin >> x;

    cout << "Введите y: ";
    cin >> y;


    double result = calculateY(x, y);
    cout << "Y = " << result << endl;


    // double x, y;
    //
    // cout << "Enter the coordinates of the point (x и y):" << endl;
    // cout << "x = ";
    // cin >> x;
    // cout << "y = ";
    // cin >> y;
    //
    // if (isInsideShadedArea(x, y)) {
    //     cout << "The point falls into the shaded area." << endl;
    // } else {
    //     cout << "The point does not fall into the shaded area." << endl;
    // }
}