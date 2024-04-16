#include <iostream>
#include <queue>

using namespace std;
int N,K;
queue<int> q;
int main()
{
	cin >> N >> K;
	for(int i = 1; i <= N; i++)
		q.push(i);
	int cnt = 0;
	cout << "<";
	while(!q.empty())
	{
		cnt++;
		if (cnt == K)
		{
			cout << q.front();
			cnt = 0;
			q.pop();
			if (q.empty())
				cout << ">";
			else
				cout << ", ";
		}
		else
		{
			q.push(q.front());
			q.pop();
		}
	}
}