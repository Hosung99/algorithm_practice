#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N;
vector<int> vec;
int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int input;
		cin >> input;
		vec.push_back(input);
	}
	sort(vec.begin(), vec.end());
	cout << vec[0] * vec[N - 1];
	return (0);
}