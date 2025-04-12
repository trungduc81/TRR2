// Cho đồ thị vô hướng liên thông G=<V, E> được biểu diễn dưới dạng danh sách cạnh. Hãy kiểm tra xem đồ thị có đường đi Euler hay chu trình Euler hay không?
//   Input:

// Dòng đầu tiên đưa vào T là số lượng bộ test.
// Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng đầu tiên đưa vào hai số |V|, |E| tương ứng với số đỉnh,  số cạnh của đồ thị; Dòng tiếp theo đưa vào các bộ đôi uÎV, vÎV tương ứng với một cạnh của đồ thị.
// T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤100; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;
// Output:

// Đưa ra 1, 2, 0 kết quả mỗi test theo từng dòng tương ứng với đồ thị có đường đi Euler, chu trình Euler và trường hợp không tồn tại.

--- Created by Tran Duc Trung ---
  
#include <bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false); cin.tie(0);

int n, m  ;
vector<vector<int>> ve;
vector<int> visited, res, deg;

void dfs(int u)
{
    visited[u] = 1;
    for (int v : ve[u])
    {
        if (!visited[v])
        {
            dfs(v);
        }
    }
}

void nhap()
{
    cin >> n >> m;
    ve.assign(n + 1, vector<int>());
    visited.assign(n + 1, 0);
    deg.assign(n + 1, 0);
    for (int i = 1; i <= m; i++)
    {
        int a, b;
        cin >> a >> b;
        ve[a].push_back(b);
        ve[b].push_back(a);
        deg[a]++;
        deg[b]++;
    }
}

void Euler()
{
    int tplt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            dfs(i);
            tplt++;
        }
    }

    if (tplt != 1)
    {
        cout << 0 << endl;
        return;
    }

    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (deg[i] % 2 != 0)
            cnt++;
    }

    if (cnt == 0)
        cout << 2 << endl;
    else if (cnt == 2)
        cout << 1 << endl;
    else
        cout << 0 << endl;
}



int main()
{
	faster() ; 
	int t ; cin >> t ; 
	while(t--)
	{
		nhap() ; 
	    Euler() ; 
	}
	return 0 ; 
}
	    

