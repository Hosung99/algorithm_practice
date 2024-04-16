#include <iostream>

using namespace std;
int T,n;
int table[12]; // table[i] = i를 1,2,3의 합으로 나타내는 경우의 수의 합
int main()
{
	cin >> T;
	table[1] = 1;
	table[2] = 2;
	table[3] = 4;
	for(int i = 4; i <= 11; i++)
	{
		table[i] = table[i - 1] + table[i - 2] + table[i - 3];
	}
 	while (T--)
	{
		cin >> n;
		cout << table[n] << "\n";
	}
	return (0);
}