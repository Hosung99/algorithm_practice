#include <iostream>
#include <vector>
using namespace std;
int N, ans = 2147483647;
vector<pair<int, int>> vec;
vector<pair<int, int>> p_vec;
void comb(int idx, int depth)
{
	if (depth > 0)
	{
		int s = 1;
		int b = 0;
		for (int i = 0; i < depth; i++)
		{
			s *= p_vec[i].first;
			b += p_vec[i].second;
		}
		ans = min(ans, abs(s - b));
	}
	if (depth == N)
		return;
	for (int i = idx; i < N; i++)
	{
		p_vec.push_back(vec[i]);
		comb(i + 1, depth + 1);
		p_vec.pop_back();
	}
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int S, B;
		cin >> S >> B;
		vec.push_back({S, B});
	}
	comb(0, 0);
	cout << ans;
	return (0);
}