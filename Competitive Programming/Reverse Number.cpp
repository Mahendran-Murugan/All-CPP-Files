#include <iostream>

using namespace std;

int main()
{
    int n = 0, rev = 0;
    cin >> n;
    while(n > 0){
        rev = rev * 10 + (n %10);
        n /= 10;
    }
    cout << rev;
    return 0;
}