#include <iostream>
#include <queue>
using namespace std;
int N, cnt = 1;
priority_queue<int, vector<int>, greater<int>> q;
int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			int input;
			cin >> input;
			q.push(input);
			if(q.size() > N)
				q.pop();
		}
	}
	cout << q.top();
	return (0);
}