#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << (int)pow((int)i, (int)i) << " ";
    }
    return 0;
}