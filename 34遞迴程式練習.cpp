#include<iostream>
using namespace std;

int re(int n)
{
    if(n==0||n==1)
    {
        return n+1;
    }
    else if(n>1)
    {
        return re(n-1)+re(n/2);
    }
}

int main()
{
    int num;
    cin>>num;
    cout<<re(num)<<endl;
}
