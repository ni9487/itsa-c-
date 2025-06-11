#include<iostream>
using namespace std;

int main()
{
    int cnt=0;
    int arr[102];
    while(cin >> arr[cnt])
    {
        cnt++;
    }
    for(int i=0;i<cnt-1;i++)
    {
        cout << arr[cnt-i-1] << " ";
    }
    cout << arr[0] << endl;
}
