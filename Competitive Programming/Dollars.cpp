#include <iostream>

using namespace std;

int main()
{
    int doll1 = 0, doll2 = 0, cent1 = 0, cent2 = 0, dollar = 0, cent = 0;
    cin >> doll1 >> cent1 >> doll2 >> cent2;
    dollar = doll1 + doll2;
    cent = cent1 + cent2;
    dollar += cent / 100;
    cent = cent % 100;
    cout << dollar << " " << cent;
    return 0;
}