#include <iostream>

using namespace std;

int task1(int N)
{
    if (N < 100 || N > 999)
    {
        cout << "The number must be three digits!" << endl;
        return 1;
    }

    int product = 1;
    bool hasEven = false;

    while (N > 0)
    {
        int digit = N % 10;
        N /= 10;

        if (digit % 2 == 0)
        {
            product *= digit;
            hasEven = true;
        }
    }

    if (hasEven)
    {
        cout << "Product of even numbers: " << product << endl;
    }
    else
    {
        cout << "No even numbers found." << endl;
    }

    return 0;
}

void task2(const int studentNumber)
{
    switch (studentNumber) {
    case 1:
        cout << "Number: 1, initials: Ivanenko I.I." << endl;
        break;
    case 2:
        cout << "Number: 2, initials: Petrov Petro P." << endl;
        break;
    case 3:
        cout << "Number: 3, initials: Sydorenko S.S." << endl;
        break;
    case 4:
        cout << "Number: 4, initials: Kovalenko K.K." << endl;
        break;
    case 5:
        cout << "Number: 5, initials: Gryshchenko H.G." << endl;
        break;
    default:
        cout << "Invalid student number. Please enter a number from 1 to 5." << endl;
        break;
    }
}

int main()
{
    int N;
    cout << "Enter a positive three-digit number N: ";
    cin >> N;
    task1(N);


    // int studentNumber;
    // cout << "Enter your student number (1-5): ";
    // cin >> studentNumber;
    // task2(studentNumber);
}
