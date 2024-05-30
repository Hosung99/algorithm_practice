#include <iostream>
#include <queue>
using namespace std;
int N;
queue<int> q;
int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> N;
	while (N--)
	{
		string s;
		cin >> s;
		if (s == "push")
		{
			int x;
			cin >> x;
			q.push(x);
		}
		else if (s == "pop")
		{
			if (q.empty())
				cout << "-1\n";
			else
			{
				cout << q.front() << '\n';
				q.pop();
			}
		}
		else if (s == "empty")
		{
			cout << q.empty() << '\n';
		}
		else if (s == "size")
		{
			cout << q.size() << '\n';
		}
		else if (s == "front")
		{
			if (q.empty())
				cout << "-1\n";
			else
				cout << q.front() << '\n';
		}
		else if (s == "back")
		{
			if (q.empty())
				cout << "-1\n";
			else
				cout << q.back() << '\n';
		}
		else if (s == "front")
		{
			if (q.empty())
				cout << "-1\n";
			else
				cout << q.front() << '\n';
		}
		else if (s == "back")
		{
			if (q.empty())
				cout << "-1\n";
			else
				cout << q.back() << '\n';
		}
	}
	return (0);
}