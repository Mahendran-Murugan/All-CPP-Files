#include <iostream>

using namespace std;

int main()
{
    string str;
    int vcount = 0, ccount = 0;
    cin >> str;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') vcount++;
        else ccount++;
    }
    cout << vcount << "\t" << ccount;
    return 0;
}