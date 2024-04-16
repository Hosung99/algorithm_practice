#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N,M,ans;
vector<int> vec;

int main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin >> N;
	for(int i = 0; i < N; i++)
	{
		int input;
		cin >> input;
		vec.push_back(input);
	}
	cin >> M;
	sort(vec.begin(), vec.end());
	int left = 1;
	int right = vec[N - 1];
	while (left <= right)
	{
		int mid = (left + right) / 2;
		int temp = 0;
		for(int i = 0; i < N; i++)
		{
			if (mid - vec[i] >= 0)
				temp += vec[i];
			else
				temp += mid;
		}
		if (temp <= M)
		{
			ans = mid;
			left = mid + 1;
		}
		else
			right = mid - 1;
	}
	cout << ans;
	return (0);
}