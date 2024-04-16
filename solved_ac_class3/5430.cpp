#include <iostream>
#include <algorithm>
#include <queue>
#include <sstream>
#include <cstring>
using namespace std;
int T;
deque<int> deq;
int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> T;
	string str, arr, st;
	int n;
	for (int i = 0; i < T; i++)
	{
		cin >> str >> n >> arr;
		arr = arr.substr(1, arr.length() - 1);
		stringstream stream(arr);
		while (getline(stream, st, ','))
		{
			if (st[0] == ']')
			{
				if (!deq.empty())
					deq.push_back(-1);
			}
			else
				deq.push_back(stoi(st));
		}
		bool reverse_flag = false;
		for (int j = 0; j < str.length(); j++)
		{
			if (str[j] == 'R')
			{
				if(!reverse_flag)
					reverse_flag = true;
				else
					reverse_flag = false;
			}
			else if (str[j] == 'D')
			{
				if (deq.empty() || deq.front() == -1)
				{
					deq.clear();
					deq.push_back(-1);
					break;
				}
				if (reverse_flag)
					deq.pop_back();
				else
					deq.pop_front();
			}
		}
		if (!deq.empty() && deq.front() == -1)
			cout << "error\n";
		else
		{
			cout << "[";
			if (reverse_flag)
			{
				for(int j = deq.size() - 1; j >= 0; j--)
				{
					cout << deq[j];
					if (j != 0)
						cout << ",";
				}
			}
			else
			{
				for (int j = 0; j < deq.size(); j++)
				{
					cout << deq[j];
					if (j != deq.size() - 1)
						cout << ",";
				}
			}
			cout << "]\n";
		}
		deq.clear();
	}
	return (0);
}