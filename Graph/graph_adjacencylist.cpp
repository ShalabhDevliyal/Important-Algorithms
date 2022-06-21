/* GRAPH USING ADJACENCY LIST
   
   without weights
   vector<int>adj[x] 
   
   with weights
   vector<int,int>adj[x]
   
   
 
 -- REDUCED SPACE COMPLEXITY =(N+2E)
 -- WITH WEIGHTS +2E = (N+2E)+2E  STILL BETTER THAN (N*N)(ADJACENCY MATRIX)
 
 IN DIRECTED 
 ADJ[U].PUSH_BACK(V)  /  WITH WEIGHTS  ADJ[U].PUSH_BACK(V,W)
 
 IN UNIDIRECTED
 
 ADJ[U].PUSH_BACK(V) /  WITH WEIGHTS  ADJ[U].PUSH_BACK(V,W)
 ADJ[V].PUSH_BACK(U) /  WITH WEIGHTS  ADJ[V].PUSH_BACK(U,W)
 */
 
 #include<bits/stdc++.h>
 using namespace std;
 
 int main()
 {
 	int v,e;
 	cout<<"Enter no of vertices : ";
 	cin>>v;
 	cout<<"Enter no of edges : ";
 	cin>>e;
 	
 	//now declare vector
 	vector<int>adj[v+1];
 	for(int i=0;i<e;i++)
 	{
 		int m,n;
 		cin>>m>>n; 
 		
 		adj[m].push_back(n);
 		adj[n].push_back(m);
	 }
	 return 0;
 }
