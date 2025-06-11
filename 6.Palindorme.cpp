#include <iostream>
#include <cstring>
#include <stack>
using namespace std;

bool isPalindorme(string str)
{
    stack<char> sentence;
    int len=str.length();
    int half=str.length()/2;
    for(int i=0;i<half;i++)
    {
        sentence.push(str[i]);
    }

    int start=0;
    if(len%2==0)
    {
        start=half;
    }
    else
    {
        start=half+1;
    }

    for(int i=start;i<len;i++)
    {
        if(sentence.top()!=str[i])
            return false;
        sentence.pop();
    }
    return true;
}

int main()
{
    string str;
    cin >> str;
    if (isPalindorme(str)) 
    {
        cout << "yes" << endl;
    } 
    else 
    {
        cout << "no" << endl;
    }
    return 0;
}
