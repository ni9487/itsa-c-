#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int num=0;
    
    while(cin>>num)
    {
        int final=num;
        int a=1,b=1;
        int cnt=0;
        while(num%2==0)//2's case
        {
            cnt++;
            num/=2;
        }
        if(cnt%2!=0)
        {
            a*=2;
            cnt--;
        }
        b*=(int)pow(2,cnt/2);

        for(int i=3;i<=sqrt(num);i+=2)
        {
            int cnt=0;
            while(num%i==0)
            {
                cnt++;
                num/=i;
            }
            if(cnt%2!=0)
            {
                a*=i;
                cnt--;
            }
            b*=(int)pow(i,cnt/2);
        }
        if(num>2)
        {
            a*=num;
        }
        cout<<final<<" = "<<a<<"*"<<b<<"^"<<b<<endl;
        
        return 0;
    }
}
