#include <iostream>

using namespace std;
int T,cnt;
string s;
int main()
{
	int temp;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> s;
		temp = 1;
		cnt = 0;
		for(int j = 0; j < s.length(); j++)
		{
			if (s[j] == 'X')
				temp = 1;
			else if (s[j] == 'O')
			{
				cnt += temp;
				temp++;
			}
		}
		cout << cnt << "\n";
	}
	return (0);
}