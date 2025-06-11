#include<iostream>
using namespace std;

int main()
{
    int arr[1000];
    int brr[1000] = {0};

    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(i >= 1)
        {
            brr[i] += arr[i] + brr[i - 1];
        }
        else
        {
            brr[i] = arr[i];
        }
    }
    for(int i = 0; i < n - 1; i++)
    {
        cout << brr[i] << " ";
    }
    cout << brr[n - 1] << endl;
}
