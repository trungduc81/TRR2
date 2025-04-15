// Cho trước đồ thị vô hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận kề.

// Yêu cầu:

// (1) Xác định bậc các đỉnh của G;

// (2) Biểu diễn G dưới dạng danh sách cạnh.

// Dữ liệu: Vào từ tệp DT.INP:

// - Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

// - Dòng thứ hai chứa số nguyên dương n không vượt quá 100 là số đỉnh của G.

// - Trong n dòng tiếp theo, mỗi dòng chứa n số 0 hoặc 1 mô tả ma trận kề của G.

// Kết quả: Ghi ra tệp DT.OUT:

// - Nếu t = 1 thì ghi ra một dòng gồm n số tự nhiên tương ứng là bậc của n đỉnh.

// - Nếu t = 2 thì ghi ra theo qui cách:

//    + Dòng đầu ghi ra hai số tự nhiên n và m là số đỉnh và số cạnh của G.

//    + Trong m dòng tiếp theo, mỗi dòng thứ i (1 <= i <= m) ghi hai số ui, vi là đỉnh đầu và đỉnh cuối của cạnh ei. Các cạnh của G được đánh số theo thứ tự từ điển.

// Ví dụ:

// DT.INP	        DT.OUT	                Giải thích
// 1               2 2 1 1                 Bậc của đỉnh 1 và 2 là 2, bậc của đỉnh 3 và 4 là 1.
// 4
// 0 1 0 1

// 1 0 1 0

// 0 1 0 0

// 1 0 0 0	
  
// 2               4 3                    Đồ thị có 4 đỉnh và 3 cạnh là (1,2), (1,4), (2,3)
// 0 1 0 1         1 2
// 1 0 1 0         1 4
// 0 1 0 0         2 3
// 1 0 0 0 

--- Created by Tran Duc Trung ---

#include<bits/stdc++.h>
using namespace std ;
#define faster() ios::sync_with_stdio(false) ; cin.tie(0) ; 
#define ll long long

int main() 
{
    faster();
    int t ; cin >> t ; 
    int n ; cin >> n ; 
    int a[100][100] ; 
    for(int i = 1 ; i <= n ; i++)
    {
    	for(int j = 1 ; j <= n ; j++)
    	{
    		cin >> a[i][j] ; 
		}
	}
	
	vector<int> deg ; 
	for(int i = 1 ; i <= n ; i++)
    {
    	int cnt = 0 ; 
    	for(int j = 1 ; j <= n ; j++)
    	{
    		if(a[i][j]==1) cnt++ ; 
    	}
    	deg.push_back(cnt) ; 
    }
    
    vector<pair<int,int>> ve ; 
    for(int i = 1 ; i <= n - 1  ; i++)
    {
    	for(int j = i + 1 ; j <= n ; j++ )
    	{
    		if(a[i][j]) ve.push_back({i,j}) ; 
		}
	}
	if(t==1)
	{
		for(int i : deg) cout << i << " " ; 
		cout << endl ; 
	}
	else 
	{
		cout << n << " " << ve.size() << endl ; 
		for(auto i : ve)
		{
			cout << i.first << " " << i.second ; 
			cout << endl ; 
		}
	}
}
