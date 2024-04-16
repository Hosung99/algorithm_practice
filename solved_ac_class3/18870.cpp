#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int N;
int arr[1000000];
vector<int> vec;
map<int, int> m;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
		vec.push_back(arr[i]);
		m[arr[i]] = -1;
	}
	sort(vec.begin(), vec.end());
	vec.erase(unique(vec.begin(),vec.end()),vec.end());
	for (int i = 0; i < N; i++)
	{
		if (m[vec[i]] == -1)
			m[vec[i]] = i;
	}
	for (int i = 0; i < N; i++)
		cout << m[arr[i]] << " ";
	return (0);
}