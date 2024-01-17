#include <bits/stdc++.h>
using namespace std;

vector<int> rotateLeft(vector<int> arr, int k)
{
    int n = arr.size();
    k = k % n;
    // For Elements before K
    vector<int> temp;
    for (int i = 0; i < k; i++)
    {
        temp.push_back(arr[i]);
    }
    // For Elements from and after K
    for (int j = k; j < n; j++)
    {
        arr[j - k] = arr[j];
    }
    for (int l = n - k; l < n; l++)
    {
        arr[l] = temp[l - (n - k)];
    }
    return arr;
}

vector<int> rotateRight(vector<int> arr, int k)
{
    int n = arr.size();
    k = k % n;
    k = n - k;
    vector<int> temp;
    for (int i = 0; i < k; i++)
    {
        temp.push_back(arr[i]);
    }
    for (int j = k; j < n; j++)
    {
        arr[j - k] = arr[j];
    }
    for (int l = n - k; l < n; l++)
    {
        arr[l] = temp[l - (n - k)];
    }
    return arr;
}

void printArray(vector<int> arr)
{
    for (int iter : arr)
    {
        cout << iter << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "The Array is :" << endl;
    printArray(arr);
    vector<int> leftR = rotateLeft(arr, 3);
    cout << "The Array after Left Rotation :" << endl;
    printArray(leftR);
    vector<int> rightR = rotateRight(arr, 3);
    cout << "The Array after Right Rotation :" << endl;
    printArray(rightR);
    return 0;
}