#include <iostream>
using namespace std;

int main() 
{
    long long argv[6];
    long long sum=0;
    for(int i=0;i<6;i++)
    {
        cin >> argv[i];
        sum+=argv[i]*argv[i]*argv[i];
    }
    cout << sum <<endl;
    return 0;
}
