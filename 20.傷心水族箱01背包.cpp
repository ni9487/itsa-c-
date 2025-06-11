#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int weight[n], value[n];
    int arr[n + 1][101];
    for(int i = 0; i < 101; i++)
    {
        arr[0][i] = 0;
    }
    for(int i = 0; i < n; i++)
    {
        cin >> weight[i] >> value[i];
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 101; j++)
        {
            if(j >= weight[i])
            {
                if(arr[i][j] < arr[i][j - weight[i]] + value[i])
                {
                    arr[i + 1][j] = arr[i][j - weight[i]] + value[i];
                }
                else
                {
                    arr[i + 1][j] = arr[i][j];
                }
            }
            else
            {
                arr[i + 1][j] = arr[i][j];
            }
        }
    }
    cout << arr[n][100] << '\n';
    return 0;
}
