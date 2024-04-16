#include <iostream>
#include <queue>
using namespace std;
priority_queue<int> p_q;
int N;
int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> N;
	int input;
	while(N--)
	{
		cin >> input;
		if (input == 0)
		{
			if (p_q.empty())
				cout << "0\n";
			else
			{
				cout << p_q.top() << "\n";
				p_q.pop();
			}
		}
		else
			p_q.push(input);
	}
	return (0);
}