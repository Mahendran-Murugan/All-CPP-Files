#include <iostream>

using namespace std;

int getPascalElement(int n, int r)
{
    int res = 1;
    for (int i = 0; i < r; i++)
    {
        res *= n - i;
        res /= i + 1;
    }
    return res;
}

int main()
{
    int row = 4, col = 4;
    cout << getPascalElement(row - 1, col - 1);
    return 0;
}