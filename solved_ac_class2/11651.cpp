#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N;
vector<pair<int, int >> vec;

bool cmp(pair<int, int> a, pair<int, int> b)
{
	if (a.second == b.second)
		return a.first < b.first;
	return a.second < b.second;
}

int main()
{
	int x,y;
	cin >> N;
	for(int i = 0; i < N; i++)
	{
		cin >> x >> y;
		vec.push_back({x, y});
	}
	sort(vec.begin(), vec.end(), cmp);
	for(int i = 0; i < N; i++)
		cout << vec[i].first << " " << vec[i].second << "\n";
	return (0);
}