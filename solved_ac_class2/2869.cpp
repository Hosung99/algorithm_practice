#include <iostream>

using namespace std;
int A,B,V,ans = 2147483647;
 int main()
 {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> A >> B >> V;
	unsigned int left = V / A;
	unsigned int right = V - 1;
	unsigned int mid;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (A * mid - B * (mid - 1) >= V)
		{
			ans = min(ans, (int)mid);
			right = mid - 1;
		}
		else
			left = mid + 1;
	}
	cout << ans;
	return (0);
 }