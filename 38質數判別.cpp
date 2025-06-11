#include<iostream>
#include<cmath>
using namespace std;

bool prime(int num)
{
    if(num==0 || num==1)
    {
        return false;
    }
    else if(num==2)
    {
        return true;
    }
    else if(num%2==0)
    {
        return false;
    }
    else
    {
        for(int i=3;i<=sqrt(num);i+=2)
        {
            if(num%i==0)
            {
                return false;
            }
        }
        return true;
    }
}

int main()
{
    int n;
    cin>>n;
    if(prime(n))
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
}