#include<iostream>
using namespace std;

int main()
{
    char c;
    int total=0;
    while(cin.get(c))
    {
        if(c=='2')
        {
            total++;
        }
    }
    if(total==0)
    {
        cout<<"0\n";
    }
    else
    {
        cout<<total<<'\n';
    }
}

