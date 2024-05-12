#include <bits/stdc++.h>
using namespace std;

int calcMinNo(int n)
{
    return n % 2 == 0 ? n : n * 2;
}

int main()
{
    int n;
    cin >> n;
    cout << calcMinNo(n);
}