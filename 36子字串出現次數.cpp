#include<iostream>
#include<string>
using namespace std;

int main()
{
    string find,input;
    cin>>find>>input;
    int cnt=0;
    for(int i=0;i<=input.length()-find.length();i++)
    {
        int check=0;
        for(int j=i;j<i+find.length();j++)
        {
            if(input[j]!=find[j-i])
            {
                check=1;
                break;
            }
        }
        if(check==0)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
