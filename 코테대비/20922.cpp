#include <iostream>
#include <vector>
using namespace std;
int N,K;
long long ans;
vector<int> vec;
int arr[100001];
int main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin >> N >> K;
	for(int i = 0; i < N; i++)
	{
		int input;
		cin >> input;
		vec.push_back(input);
	}
	long long left=0,right=0;
	while(left <= right && right < N)
	{
		if (arr[vec[right]] < K)
		{
			arr[vec[right++]]++;
			ans = max(ans, right - left);
		}
		else if (arr[vec[right]] == K)
			arr[vec[left++]]--;
	}
	cout << ans;
	return (0);
}