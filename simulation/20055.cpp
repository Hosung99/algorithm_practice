#include <iostream>
#include <deque>
using namespace std;
int N, K, cnt;
deque<pair<int, bool>> deq_1;
deque<pair<int, bool>> deq_2;

void put()
{
	if (deq_1.front().first > 0 && deq_1.front().second == false)
	{
		deq_1.front().second = true;
		deq_1.front().first -= 1;
	}
}

void move()
{
	for (int i = 1; i < N; i++)
	{
		if (deq_2[i].second && !deq_2[i - 1].second && deq_2[i - 1].first > 0)
		{
			deq_2[i - 1].second = true;
			deq_2[i - 1].first -= 1;
			deq_2[i].second = false;
		}
	}
	deq_1.back().second = false;
	for (int i = N - 1; i > 0; i--)
	{
		if (!deq_1[i].second && deq_1[i - 1].second && deq_1[i].first > 0)
		{
			deq_1[i - 1].second = false;
			deq_1[i].second = true;
			deq_1[i].first -= 1;
		}
	}
	deq_1.back().second = false;
}

void rotate()
{
	deq_2.push_back(deq_1.back());
	deq_1.pop_back();
	deq_1.push_front(deq_2.front());
	deq_2.pop_front();
}

int check()
{
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		if (deq_1[i].first == 0)
			sum++;
		if (deq_2[i].first == 0)
			sum++;
	}
	return (sum);
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> N >> K;
	for (int i = 0; i < N; i++)
	{
		int input;
		cin >> input;
		deq_1.push_back({input, false});
	}
	for (int i = 0; i < N; i++)
	{
		int input;
		cin >> input;
		deq_2.push_front({input, false});
	}
	while (1)
	{
		cnt++;
		rotate();
		move();
		put();
		int c = check();
		if (c >= K)
			break;
	}
	cout << cnt;
	return (0);
}