#include <iostream>

using namespace std;
long long num;
int N,cnt,ans;
int main()
{
	string s;
	num = 666;
	cin >> N;
	while (1)
	{
		cnt = 0;
		s = to_string(num);
		for(int i = 0; i < s.length() - 1; i++)
		{
			if (s[i] == '6')
			{
				cnt++;
				if (cnt == 3)
					break ;
				if (s[i + 1] != '6')
					cnt = 0;
			}
		}
		if (cnt >= 2)
		{
			ans++;
			if (ans == N)
			{
				cout << num;
				break ;
			}
		}
		num++;
	}
	return (0);
}