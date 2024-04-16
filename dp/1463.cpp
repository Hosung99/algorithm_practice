#include <iostream>

using namespace std;

int N;
int table[1000001]; // table[i] = i를 1로 만들기위한 최소연산 횟수를 저장하는 배열
int main()
{
	cin >> N;
	table[1] = 0;
	for (int i = 2; i <= N; i++)
	{
		table[i] = table[i - 1] + 1;
		if (i % 2 == 0)
			table[i] = min(table[i], table[i / 2] + 1);
		if (i % 3 == 0)
			table[i] = min(table[i], table[i / 3] + 1);
	}
	cout << table[N];
	return (0);
}