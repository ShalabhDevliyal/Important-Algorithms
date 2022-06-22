#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int>*arr,int u,int v)
{
	arr[u].push_back(v);
	arr[v].push_back(u);
}

void dfs(vector<int>*arr,int u,bool *visited)
{
  visited[u]=true;
  cout<<u<<" ";
  for(int i=0;i<arr[u].size();i++)
  {
  	if(!visited[arr[u][i]])
  	dfs(arr,arr[u][i],visited);
	  }	
	
}

int main()
{
	int n;
	cin>>n;
	int x,y;
	vector<int>arr[n];
	bool visited[n]={false};
	
	addEdge(arr,0,1);
	addEdge(arr,0,2);
	addEdge(arr,0,3);
	addEdge(arr,1,2);
	addEdge(arr,3,1);
	addEdge(arr,3,2);
	
	
	for(int i=0;i<n;i++)
	{
		if(!visited[i])
		dfs(arr,i,visited);
	}
}
