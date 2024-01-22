#include <iostream>

using namespace std;

int main()
{
    float tresure = 0, benShareP = 0, bbShareP = 0;
    float benShare = 0, bbShare = 0, otherShare = 0;
    cin >> tresure >> benShareP >> bbShareP;
    benShare = (int)(tresure * (benShareP / 100));
    tresure -= (float)benShare;
    bbShare = (int)(tresure * (bbShareP / 100));
    tresure -= (float)bbShare;
    otherShare = (int)tresure / 3;
    cout << benShare << "\n"
         << bbShare << "\n"
         << otherShare;
    return 0;
}