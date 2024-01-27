#include <iostream>

using namespace std;

int main()
{
    string str;
    int ucount = 0, lcount = 0;
    cin >> str;
    for(int i = 0; i < str.length(); i++){
        if(str[i] >= 'a' && str[i] <= 'z') lcount++;
        else ucount++;
    }
    cout << lcount << "\t" << ucount;
    return 0;
}