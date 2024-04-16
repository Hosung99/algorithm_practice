#include <iostream>
#include <deque>
using namespace std;
int N,K;
deque<int> deq,ans;
int main()
{
	cin >> N >> K;
	for(int i = 1; i <= N; i++)
		deq.push_back(i);
	int flag = 0;
	while (!deq.empty())
	{
		flag++;
		if (flag == K)
		{
			ans.push_back(deq.front());
			deq.pop_front();
			flag = 0;
		}
		else
		{
			deq.push_back(deq.front());
			deq.pop_front();
		}
	}
	cout << "<";
	for(int i = 0; i < ans.size(); i++)
	{
		cout << ans[i];
		if (i != ans.size() - 1)
			cout << ", ";
	}
	cout << ">";
	return (0);
}