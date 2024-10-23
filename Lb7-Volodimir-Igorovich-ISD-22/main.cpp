#include <iostream>

using namespace std;

void task2_6(int c0)
{
    int steps = 0;
    while (c0 != 1){
        if (c0 % 2 == 0){
            c0 /= 2;
            cout << c0 << endl;
            steps += 1;}
        else if (c0 % 2 == 1){
            c0 = 3 * c0 + 1;
            cout << c0 << endl;
            steps += 1;}
    }
    cout << "steps = " << steps;
}

double task2_7(const long long iterations, double pi4)
{
    for (long long i = 0; i < iterations; ++i){
        if (i % 2 == 0){
            pi4 += 1.0 / static_cast<double>(2 * i + 1);}
        else{
            pi4 -= 1.0 / static_cast<double>(2 * i + 1);}}
    return pi4;
}

void task2_10(int n)
{
    for (int i = 0; i < n; i++){
        const bool iEdge = i == 0 || i == n - 1;
        for (int j = 0; j < n; j++){
            const bool jEdge = j == 0 || j == n - 1;
            if (iEdge){
                if (jEdge){
                    cout << '+';}
                else{
                    cout << "-";}}
            else{
                if (jEdge){
                    cout << '|';}
                else{
                    cout << " ";}
            }
        }
        cout << endl;
    }
}

void task2_10()
{
}

int main()
{
    //TASK 2.6
    // int c0;
    // cout << "Enter the value:" << endl;
    // cin >> c0;
    // task2_6(c0);


    //TASK 2.7
    // constexpr double pi4 = 0.0;
    // long iterations;
    //
    // cout << "Number of iterations? ";
    // cin >> iterations;
    //
    // cout.precision(20);
    // cout << "Pi = " << (task2_7(iterations, pi4) * 4.) << endl;


    //TASK 2.10
    // int n;
    // cout << "Enter the value:" << endl;
    // cin >> n;
    // task2_10(n);
}
