#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double i;
    int times;
    cin>>times;
    for(int j=0;j<times;j++)
    {
        cin>>i;
        double area=i*i;
        cout<<fixed; cout.precision(1); cout<<round(area*10)/10<<endl;
    }
}
