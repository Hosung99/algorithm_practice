#include <iostream>
using namespace std;
int N,score,P;
int arr[51];
int main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int ans = 1;
	int cnt = 0;
	cin >> N >> score >> P;
	for(int i = 0; i < N; i++)
		cin >> arr[i];
	for(int i = 0; i < N; i++)
	{
		if (arr[i] > score)
			ans++;
		else if (arr[i] == score)
			ans = ans;
		else
			break;
		cnt++;
	}
	if (cnt == P)
		ans = -1;
	if (!N)
		ans = 1;
	cout << ans;
	return (0);
}