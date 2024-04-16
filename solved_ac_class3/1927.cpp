#include <iostream>
#include <queue>
using namespace std;
priority_queue<long long, vector<long long>,greater<long long>> q;
int N;
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin >> N;
	long long temp;
	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		if (temp == 0)
		{
			if (q.empty())
				cout << "0" << "\n";
			else
			{
				cout << q.top() << "\n";
				q.pop();
			}
		}
		else
			q.push(temp);
	}
	return (0);
}