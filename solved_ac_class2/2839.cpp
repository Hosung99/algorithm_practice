#include <iostream>

using namespace std;
int N,cnt;
int main()
{
	cin >> N;
	while (N > 0)
	{
		if (N % 5 != 0 && (N - 3) % 3 == 0)
			N -= 3;
		else if (N >= 5)
			N -= 5;
		else
			N -= 3;
		cnt++;
	}
	if (N < 0)
		cout << "-1";
	else
		cout << cnt;
	return (0);
}