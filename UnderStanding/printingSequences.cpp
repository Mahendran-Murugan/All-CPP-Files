#include <bits/stdc++.h>
using namespace std;

void printSequence(int index, int n, int arr[], vector<int> &ds)
{
    if (index == n)
    {
        for (int i : ds)
            cout << i << " ";
        cout << endl;
        return;
    }
    printSequence(index + 1, n, arr, ds);
    ds.push_back(arr[index]);
    printSequence(index + 1, n, arr, ds);
    ds.pop_back();
}

int main()
{
    int arr[] = {1, 2, 3};
    int n = 3;
    vector<int> ds;
    printSequence(0, n, arr, ds);
}