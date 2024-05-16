#include <iostream>

using namespace std;
int N,cnt;
int main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin >> N;
	for(int i = 0; i < 5; i++)
	{
		int input;
		cin >> input;
		if (input == N)
			cnt++;
	}
	cout << cnt;
	return (0);
}