#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N,M,result;
int board[53][53];
vector<vector<int>> chichen_list;
vector<pair<int, int>> chicken,home;
void	solve(int depth,vector<int> v)
{
	if (v.size() == M)
	{
		chichen_list.push_back(v);
		return ;
	}
	for(int i = depth; i < chicken.size(); i++)
	{
		v.push_back(i);
		solve(i,v);
		v.pop_back();
	}
}

int main()
{
	result = 987654321;
	cin >> N >> M;
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			cin >> board[i][j];
			if (board[i][j] == 1)
				home.push_back({i,j});
			if (board[i][j] == 2)
				chicken.push_back({i,j});
		}
	}
	vector<int> v;
	solve(0, v);
	for(vector<int> cList : chichen_list)
	{
		int ret = 0;
		for(pair<int,int> _home : home)
		{
			int _min = 987654321;
			for(int ch : cList)
			{
				int _dist = abs(_home.first - chicken[ch].first) + abs(_home.second - chicken[ch].second);
				_min = min(_min,_dist);
			}
			ret += _min;
		}
		result = min(result,ret);
	}
	cout << result;
	return (0);
}