#include<iostream>
using namespace std;

int gcd(int i,int j)
{
    while(j!=0)
    {
        int temp=j;
        j=i%j;
        i=temp;
    }
    return i;
}

int main()
{
    int i,j;
    cin>>i>>j;
    cout<<gcd(i,j)<<endl;
}
