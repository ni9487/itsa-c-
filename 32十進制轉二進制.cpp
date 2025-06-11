#include<iostream>
using namespace std;

void bi(int num)
{
    for(int i=7;i>=0;i--)
    {
        cout<<((num>>i)&1);
    }
    cout<<endl;
}

int main()
{
    int num;
    cin>>num;
    if(num>=0)
    {
        bi(num);
    }
    else
    {
        num=(~(-num))+1;
        bi(num);
    }
}
