#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N, M;
vector<pair<string, int>> vec;

int binary_search(int input)
{
	int mid,left=0,right=N-1;
	while(left <= right)
	{
		mid = (left + right) / 2;
		if (input <= vec[mid].second)
			right = mid - 1;
		else
			left = mid + 1;
	}
	if (input > vec[mid].second)
		return mid + 1;
	return mid;
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		string str;
		int input;
		cin >> str >> input;
		vec.push_back({str, input});
	}
	for (int i = 0; i < M; i++)
	{
		int input;
		cin >> input;
		cout << vec[binary_search(input)].first << "\n";
	}
	return (0);
}