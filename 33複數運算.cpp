#include<iostream>
using namespace std;

int main()
{
    char sign;
    int r1,i1,r2,i2,times;
    cin>>times;
    for(int k=0;k<times;k++)
    {
        cin>>sign>>r1>>i1>>r2>>i2;
        if(sign=='+')
        {
            cout<<r1+r2<<' '<<i1+i2<<endl;
        }
        else if(sign=='-')
        {
            cout<<r1-r2<<' '<<i1-i2<<endl;
        }
        else
        {
            cout<<r1*r2-i1*i2<<' '<<i1*r2+i2*r1<<endl;
        }
    }
}
