#include <iostream>

using namespace std;

void convertBinary(int n)
{
    if (n > 0)
    {
        convertBinary(n / 2);
        cout << n % 2;
    }
}

int main()
{
    int n = 0;
    cin >> n;
    convertBinary(n);
    return 0;
}