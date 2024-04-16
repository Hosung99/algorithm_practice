#include <iostream>
#include <deque>
#include <algorithm>
#include <utility>
using namespace std;
int P;
deque<int> deq;
int main()
{
	int tc, temp;
	cin >> P;
	while (P--)
	{
		int cnt = 0;
		cin >> tc;
		for (int i = 0; i < 20; i++)
		{
			cin >> temp;
			deq.push_back(temp);
		}
		for (int i = 1; i < 20; i++)
		{
			for (int j = 0; j < i; j++)
			{
				if (deq[i] < deq[j])
				{
					iter_swap(deq.begin() + i, deq.begin() + j);
					cnt++;
				}
			}
		}
		deq.clear();
		cout << tc << " " << cnt << "\n";
	}
	return (0);
}