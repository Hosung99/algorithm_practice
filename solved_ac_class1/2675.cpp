#include <iostream>

using namespace std;
int T,R;
int main()
{
	string str;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> R >> str;
		for (int i = 0; i < str.length(); i++)
		{
			for (int j = 0; j < R; j++)
				cout << str[i];
		}
		cout << "\n";
	}
	return (0);
}