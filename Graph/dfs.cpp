//DFS Traversal

#include<iostream>
#include<vector>
using namespace std;

void addEdge(vector<int>*arr,int u,int v)
{
    arr[u].push_back(v);
    arr[v].push_back(u);
}

void dfs(vector<int>*arr,int u,bool *visit)
{
    cout<<u<<" ";
    visit[u]=true;

    for(int i=0;i<arr[u].size();i++)
    {
        if(!visit[arr[u][i]])
            dfs(arr,arr[u][i],visit);
    }
}
int main()
{
int  n=4;
    // cout<<"no of vertices: ";
    // cin>>n;
    vector<int>arr[n];
    
    bool visit[n]={false};


    addEdge(arr,0, 1);
    addEdge(arr,0, 2);
    addEdge(arr,1, 2);
    addEdge(arr,2, 0);
    addEdge(arr,2, 3);
    addEdge(arr,3, 3);

   for(int i=0;i<n;i++)
       {
           if(!visit[i])
                dfs(arr,2,visit);
        }
}
