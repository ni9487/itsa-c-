#include <iostream>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        if (n == -1)
        {
            break;
        }
        else
        {
            int fi[n + 1];
            fi[0] = 1;
            fi[1] = 1;
            for (int i = 2; i <= n; i++)
            {
                fi[i] = fi[i - 1] + fi[i - 2];
            }
            cout << fi[n] << "\n";
        }
    }
    return 0;
}
