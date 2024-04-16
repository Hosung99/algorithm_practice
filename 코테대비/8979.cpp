#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Medal
{
	int index, g, s, b;
};

int N, K;
vector<Medal> vec;

int cmp(Medal &x, Medal &y)
{
	if (x.g == y.g)
	{
		if (x.s == y.s)
		{
			if (x.b == y.b)
				return x.index < y.index;
			return x.b > y.b;
		}
		return x.s > y.s;
	}
	return x.g > y.g;
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int index, g, s, b;
	cin >> N >> K;
	for (int i = 0; i < N; i++)
	{
		cin >> index >> g >> s >> b;
		vec.push_back({index, g, s, b});
	}
	sort(vec.begin(), vec.end(), cmp);
	int ans;
	for (int i = 0; i < N; i++)
	{
		if (vec[i].index == K)
		{
			int j = i;
			while (j >= 0)
			{
				if ((vec[i].g == vec[j].g) && (vec[i].s == vec[j].s) && (vec[i].b == vec[j].b))
				{
					j--;
					if (j == -1)
					{
						j++;
						break;
					}
				}
				else
				{
					j++;
					break;
				}
			}
			ans = j + 1;
		}
	}
	cout << ans;
	return (0);
}