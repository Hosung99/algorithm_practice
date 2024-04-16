#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int N;

struct cmp
{
	bool operator()(int a, int b)
	{
		if (abs(a) == abs(b))
			return a > b;
		return abs(a) > abs(b);
	}
};

int main()
{
	priority_queue<int, vector<int>, cmp> p_q; //p_q의 비교함수는 구조체안에 있어야한다.
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin >> N;
	while(N--)
	{
		int input;
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