#include <bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false); cin.tie(0);
#define ll long long

int t , n , u ; 
int a[1000][1000] ; 
int visited[1001] ; 
vector<pair<int,int>> canh ; 
vector<int> ve[1001] ; 

void nhap()
{
	cin >> t >> n >> u; 
	for(int i = 0 ; i < 1001 ; i++) ve[i].clear() ; 
	for(int i = 1 ; i <= n ; i++)
	{
		for(int j = 1 ; j <= n ; j++)
		{
			cin >> a[i][j] ; 
		}
	}
	for(int i = 1 ; i <= n ; i++)
	{
		for(int j = 1 ; j<= n ; j++)
		{
			if(a[i][j]) ve[i].push_back(j) ; 
		}
	}
}

void tree_dfs(int u)
{
	visited[u] = 1 ; 
	for(int i : ve[u])
	{
		if(!visited[i])
		{
			canh.push_back({u,i}) ; 
			tree_dfs(i) ; 
		}
	}
}

void tree_graph_dfs()
{
	for(int i = 0 ; i < 1001 ; i++) visited[i] = 0 ; 
	canh.clear() ; 
	tree_dfs(u) ; 
	if(canh.size() < n - 1) cout << 0 << endl ; 
	else 
	{
		cout << canh.size() << endl ; 
		for(auto i : canh)
		{
			cout << i.first << " " << i.second << endl ; 
		}
	}
}

void tree_graph_bfs()
{
	canh.clear() ; 
	for(int i = 0 ; i < 1001 ; i++) visited[i] = 0 ; 
	queue<int> q ; 
	visited[u] = 1 ; 
	q.push(u) ; 
	while(!q.empty())
	{
		int m = q.front() ; 
		q.pop() ; 
		for(int i : ve[m])
		{
			if(!visited[i])
			{
				visited[i] = 1 ; 
				canh.push_back({m,i}) ; 
				q.push(i) ; 
			}
		}
	}
	
	if(canh.size() < n - 1 ) cout << 0 << endl ; 
	else 
	{
		cout << canh.size() << endl ; 
		for(auto i : canh)
		{
			cout << i.first << " " << i.second << endl ; 
		}
	}
}

int main()
{
	nhap()  ;
	if(t==1) tree_graph_dfs() ; 
	else tree_graph_bfs() ; 

}
