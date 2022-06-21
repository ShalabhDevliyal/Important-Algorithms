// GRAPH ADJACENCY MATRIX

/*   DISADVANTAGES

    -CANT BE USED TO STORE LARGE VALUES ONLY FOR SMALLER VALUES OF N(VERTICES)
    -SPACE COMPLEXITY (N*N)

*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int v,e;
	cout<<"Enter no of Vertices : ";
	cin>>v;
	cout<<"Enter no of Edges : ";
	cin>>e;
	
	int adj[v+1][v+1];
	
	for(int i=0;i<e;i++)
	{
		int m,n;
		cin>>m>>n;
		adj[m][n]=1;
		adj[n][m]=1;
	}
}
