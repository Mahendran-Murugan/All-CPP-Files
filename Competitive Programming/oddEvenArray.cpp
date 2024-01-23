#include <iostream>

using namespace std;

int main()
{
    int n = 0, oddCount = 0, evenCount = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            oddCount++;
        }
        else
        {
            evenCount++;
        }
    }
    cout << "Odd: " << oddCount << "\n"
         << "Even: " << evenCount;
    return 0;
}