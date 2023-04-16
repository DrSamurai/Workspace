#include <iostream>
#include <stdlib.h>
#include <unordered_map>

using namespace std;

int fibo(int num);
int fiboDynamic(int num, unordered_map<int, int> &memo);

int main()
{
    system("clear");

    unordered_map<int, int> memo;

    for (int i = 0; i < 100; i++)
    {
        // 0 1 1 2 3 5 8 13 21 34
        cout << i << "'th number of fibo is " << fiboDynamic(i, memo) << endl;
    }

    return 0;
}

int fiboDynamic(int num, unordered_map<int, int> &memo)
{
    if (memo.find(num) != memo.end())
    {
        return memo[num];
    }

    if (num <= 1)
    {
        memo[num] = num;
    }
    else
    {
        memo[num] = fiboDynamic(num - 1, memo) + fiboDynamic(num - 2, memo);
    }

    return memo[num];
}

int fibo(int num)
{

    // f(10) = f(9) + f(8)
    if (num < 2)
        return num;
    return fibo(num - 1) + fibo(num - 2);
}