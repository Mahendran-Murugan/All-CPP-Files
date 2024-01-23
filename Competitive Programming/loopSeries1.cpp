#include <iostream>

using namespace std;

int main()
{
    int val = 2;
    int n = 0;
    cin >> n;
    int calc = 0;
    for (int i = 0; i < n; i++)
    {
        cout << val << " ";
        calc = val * 2 - i;
        val = calc;
    }
    return 0;
}