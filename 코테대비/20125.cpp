#include <iostream>
#include <vector>
using namespace std;
int N;
char board[1001][1001];
bool head,arm,hurry,l_leg,r_leg;
vector<pair<int, int>> vec;
int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
			cin >> board[i][j];
	}
	for(int i = 1; i <= N; i++)
	{
		for(int j = 1; j <= N; j++)
		{
			if (board[i][j] == '*' && !head)
			{
				head = true;
				vec.push_back({i, j});
			}
			else if (board[i][j] == '*' && !arm)
			{
				arm = true;
				vec.push_back({i, j});
				while(board[i][j] == '*')
					j++;
				vec.push_back({i, j - 1});
				j = N;
			}
			else if (board[i][j] == '*' && !hurry)
			{
				hurry = true;
				while(board[i][j] == '*')
					i++;
				i--;
			}
			else if (board[i][j] == '*' && !l_leg)
			{
				int temp = i;
				l_leg = true;
				vec.push_back({i, j});
				while(board[i][j] == '*')
					i++;
				vec.push_back({i, j});
				i = temp;
			}
			else if (board[i][j] == '*' && !r_leg)
			{
				int temp = i;
				r_leg = true;
				vec.push_back({i, j});
				while(board[i][j] == '*')
					i++;
				vec.push_back({i, j});
				i = temp;
			}
		}
	}
	pair<int,int> heart = {vec[1].first, vec[0].second};
	cout << heart.first << " " << heart.second << "\n";
	cout << heart.second - vec[1].second << " " << vec[2].second - heart.second << " " << vec[3].first - 1 - heart.first << " " << vec[4].first - vec[3].first << " " << vec[6].first - vec[5].first;
	return (0);
}