#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double s;
    cin>>s;
    double m=s*1.6;
    double r=round(m*10)/10;
    cout<<fixed;
    cout.precision(1);
    cout<<r<<endl;
}
