#include <iostream>

using namespace std;

int main()
{
    int res =1;
    int n = 0;
    cin >> n;
    for(int i = 2; i <= n; i++){
        res *= i;
    }
    cout << res;
    return 0;
}