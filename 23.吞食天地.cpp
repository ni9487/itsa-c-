#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int arr[200] = {0};
    int final[200] = {0};
    for(int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
        if(i == 0)
            final[0] = arr[0];
        else
            final[i] = final[i-1] + arr[i];
    }

    int s, e;
    std::cin >> s >> e;
    if(s == 1)
        std::cout << final[e-1] << "\n";
    else if(e == 1)
        std::cout << final[0] << "\n";
    else
        std::cout << final[e-1] - final[s-2] << "\n";

    return 0;
}
