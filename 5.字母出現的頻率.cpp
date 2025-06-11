#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() 
{
    int arr[26]={0};
    char sentence[10000];

    cin.getline(sentence, sizeof(sentence));
    int length = strlen(sentence);

    for(int i=0;i<length;i++)
    {
        if(isalpha(sentence[i])&&islower(sentence[i]))
        {
            arr[(int)sentence[i]-'a']++;
        }
        else if(isalpha(sentence[i])&&isupper(sentence[i]))
        {
            arr[(int)sentence[i]-'A']++;
        }
    }
    for(int i=0;i<25;i++)
    {
        cout << arr[i] << " ";
    }
    cout << arr[25] << endl;
}
