#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int T;
int main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin >> T;
	while (T--)
	{
		int n,k,id,m;
		cin >> n >> k >> id >> m;
		int board[101][101] = {0};
		int cnt[101] = {0};
		int order[101] = {0};
		id--;
		for(int it = 0; it < m; it++)
		{
			int i,j,s;
			cin >> i >> j >> s;
			i--;
			j--;
			board[i][j] = max(board[i][j], s);
			cnt[i]++;
			order[i] = it;
		}
		vector<pair<int, pair<int, pair<int,int>>>> vec;
		for(int i = 0; i < n; i++)
		{
			int sum = 0;
			for(int j = 0; j < k; j++)
				sum += board[i][j];
			vec.push_back({sum,{-cnt[i],{-order[i],i}}});
		}
		sort(vec.begin(), vec.end());
		for(int i = 0; i < n; i++)
		{
			if (vec[i].second.second.second == id)
				cout << n - i << "\n";
		}
	}
	return (0);
}