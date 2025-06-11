#include<iostream>
#include<string>
using namespace std;

int main()
{
    string input;
    cin >> input;
    int check=0;
    for(int i=0;i<input.length()/2;i++)
    {
        if(input[i]!=input[input.length()-i-1])
        {
            check=1;
        }
    }
    if(check==1)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
    }
}
