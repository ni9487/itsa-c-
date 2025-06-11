#include <iostream>
using namespace std;

int main() 
{
    int argv[6],argprint[6];

    for(int i=0;i<6;i++)
    {
        cin >> argv[i];
        argprint[6-i-1]=argv[i];
    }
    for(int i=0;i<5;i++)
    {
        cout << argprint[i] << " ";
    }
    cout << argprint[5] << endl;
    return 0;
}
