#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n,x,cnt;
vector<int> vec;
int main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		vec.push_back(input);
	}
	cin >> x;
	sort(vec.begin(),vec.end());
	int start = 0;
	int end = vec.size() - 1;
	while (start < end)
	{
		if (vec[start] + vec[end] == x)
		{
			start++;
			cnt++;
		}
		else if (vec[start] + vec[end] > x)
			end--;
		else if (vec[start] + vec[end] < x)
			start++;
	}
	cout << cnt;
	return (0);
}