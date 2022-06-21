/* TRAVERSAL TECHNQUES 

for(int i=0;i<n;i++)
{
	if(!visited[i])
	{
		//Traversal method
	}
}
*/

#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void addEdge(vector<int>*arr,int u,int v)
{
    arr[u].push_back(v);
    arr[v].push_back(u);
}

void bfs(vector<int>*arr,int u,bool *visit,queue<int>&q)
{
    q.push(u);
    visit[u]=true;
    int f;
    while(!q.empty())
    {
        f=q.front();
        cout<<f<<" ";
        q.pop();
        for(auto i:arr[f])
        {
            if(visit[i]==false){
                q.push(i);
                visit[i]=true;
            }
                
        }
    }
}

int main()
{
    int  n=8;
    // cout<<"no of vertices: ";
    // cin>>n;
    vector<int>arr[n];
    queue<int>q;
    bool visit[n]={false};


    addEdge(arr,0,1);
    addEdge(arr,0,2);   
    addEdge(arr,1,2);
    addEdge(arr,1,3);
    addEdge(arr,1,4);
    addEdge(arr,2,5);
    addEdge(arr,4,5);
    addEdge(arr,4,6);
    addEdge(arr,5,6);
    addEdge(arr,5,7);
    // addEdge(arr,0, 1);
    // addEdge(arr,0, 2);
    // addEdge(arr,1, 2);
    // addEdge(arr,2, 0);
    // addEdge(arr,2, 3);
    // addEdge(arr,3, 3);
 

    for(int i=0;i<n;i++)
    {
        if(visit[i]==false)
            bfs(arr,i,visit,q);
    }


}
