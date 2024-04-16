#include <iostream>

using namespace std;
int N,ans;
string S;
int main()
{
	cin >> N;
	cin >> S;
	for(int i = 0; i < N; i++)
		ans += S[i] - 48;
	cout << ans;
	return (0);
}