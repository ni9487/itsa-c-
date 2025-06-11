#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int female[n+1];
    int male[n+1];

    female[0] = 1;
    female[1] = 1;
    male[0] = 0;
    male[1] = 1;

    for(int i = 2; i <= n; i++)
    {
        female[i] = female[i-1] + female[i-2];
        male[i] = female[i-1] + male[i-1];
    }

    std::cout << male[n] << " " << female[n] << "\n";

    return 0;
}
