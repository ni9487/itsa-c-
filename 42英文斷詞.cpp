#include<iostream>
#include<string>
#include<sstream>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;

int main() 
{
    string line;
    getline(cin, line); 

    // 全部轉小寫
    transform(line.begin(), line.end(), line.begin(), ::tolower);

    set<string> seen;        
    vector<string> result;  

    stringstream ss(line);
    string word;

    while(ss >> word) 
    { 
        if(seen.find(word) == seen.end()) 
        { 
            seen.insert(word);
            result.push_back(word);
        }
    }

    for(int i = 0; i < result.size(); i++) 
    {
        cout << result[i];
        if(i != result.size() - 1) cout << " "; 
    }
    cout << "\n"; 
    return 0;
}
