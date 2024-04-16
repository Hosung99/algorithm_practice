#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N;
long long int ans;
vector<int> vec;
int main()
{
	cin >> N;
	int temp;
	for(int i = 0; i < N; i++)
	{
		cin >> temp;
		vec.push_back(temp);
	}
	sort(vec.rbegin(),vec.rend());
	for(int i = 0; i < N; i++)
	{
		int money = vec[i] - i;
		if (money > 0)
			ans += money;
	}
	cout << ans;
	return (0);
}