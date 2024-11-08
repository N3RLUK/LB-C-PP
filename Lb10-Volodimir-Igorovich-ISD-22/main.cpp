#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void task1()
{
    srand(time(0));
    int const A = 4, B = 3;
    int matrix[A][B];
    for (int row = 0; row < A; row++)
    {
        int funnyCounter = 0;
        for (int col = 0; col < B; col++)
        {
            matrix[row][col] = rand() % 100;
            if (matrix[row][col] % 2 == 0)
            {
                funnyCounter++;
            }
            cout << matrix[row][col] << "\t";
        }
        cout << "Total fun nums: " << funnyCounter << endl;
    }
}

void task2()
{
    srand(time(0));
    int const X = 6, Y = 4;
    int tbl[X][Y];
    for (int i = 0; i < X; i++)
    {
        for (int j = 0; j < Y; j++)
        {
            tbl[i][j] = rand() % 100;
            cout << tbl[i][j] << "\t";
        }
        cout << endl;
    }
    for (int i = 0; i < Y; i++)
    {
        int oddCounter = 0;
        for (int j = 0; j < X; j++)
        {
            if (tbl[j][i] % 2 == 0)
            {
                oddCounter++;
            }
        }
        cout << "Odd Count:" << oddCounter << "\t";
    }
}

void task3()
{
    srand(time(0));
    int const H = 5, W = 7;
    int grid[H][W];
    for (int u = 0; u < H; u++)
    {
        int strangeSum = 0;
        for (int v = 0; v < W; v++)
        {
            grid[u][v] = rand() % 100;
            strangeSum += grid[u][v];
            cout << grid[u][v] << "\t";
        }
        cout << "Row magic number: " << strangeSum << endl;
    }
}

void task4()
{
    srand(time(0));
    int const Q = 4, R = 6;
    int table[Q][R];
    for (int x = 0; x < Q; x++)
    {
        for (int y = 0; y < R; y++)
        {
            table[x][y] = rand() % 100;
            cout << table[x][y] << "\t";
        }
        cout << endl;
    }
    for (int j = 0; j < R; j++)
    {
        int mysterySum = 0;
        for (int i = 0; i < Q; i++)
        {
            mysterySum += table[i][j];
        }
        cout << "Mystery Col Sum:" << mysterySum << "\t";
    }
}

void task5()
{
    srand(time(0));
    int const P = 3, Q = 4;
    int box[P][Q];
    int bigNum = 0;
    int bigRow, bigCol;
    for (int i = 0; i < P; i++)
    {
        for (int j = 0; j < Q; j++)
        {
            box[i][j] = rand() % 100;
            cout << box[i][j] << "\t";
            if (box[i][j] > bigNum)
            {
                bigNum = box[i][j];
                bigRow = i;
                bigCol = j;
            }
        }
        cout << endl;
    }
    cout << "\n" << "Max mystery num: " << bigNum << "\t" << "At indices: " << bigRow << " " << bigCol << endl;
}

void task6()
{
    srand(time(0));
    int const M = 3, N = 4;
    int frame[M][N];
    int smallNum = 0;
    int smallRow, smallCol;
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            frame[i][j] = rand() % 100;
            cout << frame[i][j] << "\t";
            if (i == 0 && j == 0)
            {
                smallNum = frame[i][j];
            }
            else if (frame[i][j] < smallNum)
            {
                smallNum = frame[i][j];
                smallRow = i;
                smallCol = j;
            }
        }
        cout << endl;
    }
    cout << "\n" << "Small magic num: " << smallNum << "\t" << "Found at: " << smallRow << " " << smallCol << endl;
}

void task15()
{
    srand(time(0));
    int const Z = 3, K = 3;
    int grid[Z][K];
    int mainSum = 0;
    int secSum = 0;
    for (int a = 0; a < Z; a++)
    {
        for (int b = 0; b < K; b++)
        {
            grid[a][b] = rand() % 20;
            cout << grid[a][b] << "\t";
        }
        cout << endl;
    }
    for(int i = 0; i < Z; i++) {
        mainSum += grid[i][i];
        secSum += grid[i][Z - i - 1];
    }
    cout << "\n" << "Magic sum of main diag: " << mainSum << "\t" << "Strange sum of sec diag: " << secSum << endl;
}

int main()
{
    // task1();
    // task2();
    // task3();
    // task4();
    // task5();
    // task6();
    // task15();
}
