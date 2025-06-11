#include <iostream>
#include <string>

int main()
{
    std::string c;
    std::cin >> c;
    for (char ch : c)
    {
        std::cout << static_cast<char>(ch - 3);
    }
    std::cout << "\n";
    return 0;
}
