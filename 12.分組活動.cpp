#include<iostream>
using namespace std;

int main()
{
    int n = 0;
    char arr[1000];
    int devide = 0;
    cin >> n;
    cin >> arr;
    cin >> devide;
    for(int i = 0; i < n; i++)
    {
        cout << arr[i];
        if(i >= devide - 1 && (i + 1) % devide == 0 && i != n - 1)
        {
            cout << " ";
        }
    }
    cout << endl;
}