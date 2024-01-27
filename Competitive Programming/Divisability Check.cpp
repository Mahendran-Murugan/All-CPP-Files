#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    if((n%5 == 0)&&(n%8 == 0)) cout << "Divisible by 5 & 8";
    else cout << "Not Divisible by 5 & 8";
    return 0;
}