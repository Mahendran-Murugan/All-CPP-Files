#include <iostream>

using namespace std;

int main()
{
    int n = 0, pcount = 0, zcount = 0, ncount = 0;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] == 0) zcount++;
        else if(arr[i] > 0) pcount++;
        else ncount++;
    }
    cout << zcount << "\t" << pcount << "\t" << ncount;
    return 0;
}