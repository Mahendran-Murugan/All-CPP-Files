// Normal way of Using Recursion to Calculate Fibonacci

/*
#include <bits/stdc++.h>
using namespace std;

    int fibo(int num)
{
    if (num <= 1)
        return num;
    return fibo(num - 1) + fibo(num - 2);
}

int main()
{
    int num;
    cin >> num;
    cout << fibo(num);
    return 0;
}
*/

// Using Memoisation it reduces the time complexity

#include <bits/stdc++.h>
using namespace std;

int fibo(vector<int> mem, int num)
{
    if (num <= 1)
        return num;

    if (mem[num] != -1)
        return mem[num];

    return mem[num] = fibo(mem, num - 1) + fibo(mem, num - 2);
}

int main()
{
    int num;
    cin >> num;
    vector<int> mem(num + 1, -1);
    cout << fibo(mem, num);
    return 0;
}
