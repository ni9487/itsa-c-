#include<iostream>
#include<queue>
using namespace std;

const int maxn=200; //為了傳二維進函式
typedef pair<int,int> pii;

int prim(int arr[maxn][maxn],int k)
{
    //預設是大堆，改掉
    priority_queue<pii,vector<pii>,greater<pii>> pq;
    int sum=0;
    bool visited[k]={0};
    pq.push({0,0});
    while(!pq.empty())
    {
        int near=pq.top().second;
        int key=pq.top().first;
        pq.pop();
        if(visited[near])
            continue;
        visited[near]=1;
        sum+=key;
        for(int j=0;j<k;j++) //~~~~用來更新key裡的狀態
        {
            if(arr[near][j]!=0&&visited[j]==0)
            {
                pq.push({arr[near][j],j});
            }
        }
    }
    return sum;
}

int main()
{
    int k=0;
    int arr[maxn][maxn];
    cin>>k;
    for(int i=0;i<k+1;i++)
    {
        for(int j=0;j<k+1;j++)
        {
            cin>>arr[i][j];
        }
    }
    int ssum=prim(arr,k+1);
    cout<<ssum<<'\n';
}
