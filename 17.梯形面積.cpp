#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double up, down, height;
    while (cin >> up >> down >> height)
    {
        double area = (up + down) * height / 2;
        cout << "Trapezoid area:" << fixed << setprecision(1) << area << '\n';
    }
}


