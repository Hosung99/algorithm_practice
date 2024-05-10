#include <iostream>
#include <vector>
using namespace std;
int N, M, ans, board[30][30];
vector<int> vec;

int solve()
{
	int sum = 0;

	for(int i = 0; i < N; i++)
	{
		int temp = 0;
		for(int j = 0; j < 3; j++)
		{
			temp = max(temp, board[i][vec[j]]);
		}
		sum += temp;
	}
	return (sum);
}

void dfs(int depth)
{
	if (vec.size() == 3)
	{
		ans = max(ans, solve());
		return ;
	}
	for(int i = 0; i < M; i++)
	{
		vec.push_back(i);
		dfs(i + 1);
		vec.pop_back();
	}
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			cin >> board[i][j];
	}
	dfs(0);
	cout << ans;
	return (0);
}