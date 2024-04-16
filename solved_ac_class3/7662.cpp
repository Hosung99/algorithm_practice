#include <iostream>
#include <set>
using namespace std;
int T,k;
int main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin >> T;
	while(T--)
	{
		multiset<int> ms;
		string str;
		int input;
		cin >> k;
		while(k--)
		{
			cin >> str >> input;
			if (str == "I")
				ms.insert(input);
			else if (str == "D")
			{
				if (ms.empty())
					continue ;
				if (input == 1)
					ms.erase(--ms.end());
				else
					ms.erase(ms.begin());
			}
		}
		if (ms.empty())
			cout << "EMPTY\n";
		else
			cout << *(--ms.end()) << " " << *(ms.begin()) << "\n";
	}
	return (0);
}