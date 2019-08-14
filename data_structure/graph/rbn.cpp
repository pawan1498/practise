// A simple representation of graph using STL
#include<bits/stdc++.h>
using namespace std;

// A utility function to add an edge in an
// undirected graph.
void addEdge(vector<int> adj[], int u, int v)
{
	adj[u].push_back(v);
	
}

void rbn(vector<int> adj[] , int start , int nd )
	
{
	for(auto i : adj[start])
	{
		if( i == nd )
		cout <<"there is a route between node "<<start<<" and "<<i;
		printf("\n");
	}

}

// Driver code
int main()
{
	int V = 5;
	vector<int> adj[V];
	addEdge(adj, 0, 1);
	addEdge(adj, 0, 4);
	addEdge(adj, 1, 2);
	addEdge(adj, 1, 3);
	addEdge(adj, 1, 4);
	addEdge(adj, 2, 3);
	addEdge(adj, 3, 4);
	int start,end;
	cout << "enter starting node"; 
	cin>> start;
	cout << "enter destination node ";
	cin >> end ;
	rbn(adj, start , end);
	return 0;
}
