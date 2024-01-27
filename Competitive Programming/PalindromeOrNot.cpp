#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str, rev;
    cin >> str;
    rev = str;
    reverse(rev.begin(), rev.end());
    if(str == rev) cout << "Palindrome";
    else cout << "Not Palindrome";
    return 0;
}
