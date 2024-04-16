#include <iostream>
using namespace std;
int N,M,cnt;
string S;
int main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin >> N >> M >> S;
	for(int i = 0; i < M; i++)
	{
		int k = 0;
		if (S[i] == 'I')
		{
			while (S[i+1] && S[i+2] && (S[i + 1] == 'O' && S[i + 2] == 'I'))
			{
				k++;
				if (k == N)
				{
					cnt++;
					k--;
				}
				i += 2;
			}
		}
	}
	cout << cnt;
	return (0);
}