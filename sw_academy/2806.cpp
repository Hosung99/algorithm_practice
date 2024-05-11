#include <iostream>

using namespace std;
int T,input;
long long ans;
int col[11];

void nqueen(int depth)
{
	if (depth == input)
		ans++;
	else
	{
		for(int i = 0; i < input; i++)
		{
			col[depth] = i;
			bool can = true;
			for(int j = 0; j < depth; j++)
			{
				if (col[depth] == col[j] || abs(col[depth] - col[j]) == depth - j)
				{
					can = false;
					break ;
				}
			}
			if (can)
				nqueen(depth + 1);
		}
	}
}

long long solve(int input)
{
	ans = 0;
	for(int i = 0; i < 11; i++)
		col[i] = 0;
	nqueen(0);
	return (ans);
}

int main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin >> T;
	for(int i = 1; i <= T; i++)
	{
		cin >> input;
		long long cnt = solve(input);
		cout << "#" << i << " " << cnt << "\n";
	}
	return (0);
}