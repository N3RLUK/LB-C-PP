#include <iostream>

using namespace std;

int task5(int num)
{
    int result = 0;
    while (num > 0)
    {
        int lastNum = num % 10;
        if (lastNum > 5)
        {
            result += lastNum;
        }
        num /= 10;
    }
    return result;
}

int main()
{
    int num;
    cout << "Enter the natural number: " << endl;
    cin >> num;
    cout << task5(num);
}
