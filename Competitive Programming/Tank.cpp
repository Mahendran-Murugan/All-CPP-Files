#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float const pi = 3.14;
    float radius = 0, height = 0, volume = 0, waterPerHour = 0, hours = 0;
    cin >> radius >> height >> waterPerHour >> hours;
    volume = pi * radius * radius * height;
    if (hours > volume)
    {
        cout << "water can be fillerd within " << hours << " hours";
    }
    else
    {
        cout << "water can't be fillerd within " << hours << " hours";
    }
    return 0;
}