#include <iostream>
#include <vector>
using namespace std;
int N, M, sum;
vector<int> vec;
int arr[10001];
int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> M >> N;
	for (int i = 2; i <= N; i++)
		arr[i] = i;
	for (int i = 2; i <= N; i++)
	{
		if (arr[i] == 0)
			continue;
		for (int j = i * i; j <= N; j += i)
		{
			arr[j] = 0;
		}
	}
	for(int i = M; i <= N; i++)
	{
		if (arr[i] != 0)
		{
			vec.push_back(i);
			sum += i;
		}
	}
	if (vec.size() == 0)
		cout << "-1";
	else
		cout << sum << "\n" << vec[0];
	return (0);
}