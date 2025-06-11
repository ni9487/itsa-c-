#include <iostream>
#include <cstring>
using namespace std;

int josephus(int n,int k)
{
    if(n==1)//唯1人時，必定編號0活
        return 0;
    return((josephus(n-1,k)+k)%n); //少1人後再數k
    //回推，若活到最後處0位，當初剩2人時應該站哪?
    //應站k%2位
}

int main()
{
    int m;  
    cin >> m;

    for (int test=0;test<m;test++)
    {
        int n;
        int k;
        cin >> n >> k;

        char names[51][51];
        for (int i=0;i<n;i++) 
        {
            cin >> names[i];
        }

        int winner_index = josephus(n,k);
        cout << names[winner_index] << endl;
    }

    return 0;
}
