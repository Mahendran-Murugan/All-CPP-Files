#include <bits/stdc++.h>
using namespace std;

void recursion(int n)
{
    cout << n << " ";
    recursion(n + 1);
}

int main()
{
    recursion(0);
    return 0;
}