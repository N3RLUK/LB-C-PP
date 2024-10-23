#include <iostream>
#include <cmath>

using namespace std;

void task7(float num, int numRemoveAfterDot)
{
    cout << fixed;
    cout.precision(numRemoveAfterDot);
    cout << num;
}

bool task8(double num1, double num2, double epsilon = 0.000001)
{
    return fabs(num1 - num2) < epsilon;
}

int task9(int num)
{
    int correctNum;
    if (num > 255)
    {
        do
        {
            cout << "Number can not be more than 255";
            cout << "\n" << "Enter suitable value numbers:" << endl;
            cin >> correctNum;
            if (correctNum <= 255)
            {
                num = correctNum;
                break;
            }
            else
            {
                cout << "The number you entered is still more than 255. Try again." << endl;
            }
        }
        while (true);
    }
    return num;
}

int main()
{
    //TASK 6
    // bool answer;
    // int value;
    // while (true)
    // {
    //     cout << "Enter a value: ";
    //     cin >> value;
    //
    //     answer = (value >= 0 && value < 10 || value * 2 < 20 && value - 2 > -2 || value - 1 > 1 && value / 2 < 10 ||
    //         value == 111);
    //
    //     cout << (answer ? "THAT'S TRUE" : "THAT'S NOT TRUE") << endl;
    //
    //     if (value == 999)
    //     {
    //         break;
    //     }
    // }


    //TASK 7
    // float num;
    // int numRemoveAfterDot;
    //
    // cout << "Enter the number with floating-point:" << endl;
    // cin >> num;
    // cout << "Enter the number of digits you want to leave after the dot:" << endl;
    // cin >> numRemoveAfterDot;
    // task7(num, numRemoveAfterDot);

    //TASK 8
    // {
    //     int a, b;
    //     cout << "Enter two integers: " << endl;
    //     cin >> a >> b;
    //
    //     double num1 = 1.0 / a;
    //     double num2 = 1.0 / b;
    //
    //     if (task8(num1, num2))
    //     {
    //         cout << "Results are equal (by 0.000001 epsilon)" << endl;
    //     }
    //     else{
    //         cout << "Results are not equal (by 0.000001 epsilon)" << endl;
    //     }
    // }


    //TASK 9
    // int a, b, c, d;
    //
    // cout << "Enter four numbers";
    //
    // cout << "\n" << "First: " << endl;
    // cin >> a;
    // a = task9(a);
    //
    // cout << "Second: " << endl;
    // cin >> b;
    // b = task9(b);
    // cout << "Third: " << endl;
    // cin >> c;
    // c = task9(c);
    //
    // cout << "Fourth: " << endl;
    // cin >> d;
    // d = task9(d);
    //
    // cout << a << "." << b << "." << c << "." << d;
}
