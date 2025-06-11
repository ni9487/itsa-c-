#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <sstream>
#include <algorithm>
using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    if(sqrt(x*x+y*y)>100)
    {
        cout<<"outside\n";
    }
    else
    {
        cout<<"inside\n";
    }
}