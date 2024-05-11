#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	for (int i = 1; i <= 10; i++)
	{
		int dump;
		vector<int> vec;
		cin >> dump;
		for (int i = 0; i < 100; i++)
		{
			int input;
			cin >> input;
			vec.push_back(input);
		}
		while (dump--)
		{
			int mn_idx = min_element(vec.begin(), vec.end()) - vec.begin();
			int mx_idx = max_element(vec.begin(),vec.end()) - vec.begin();
			vec[mx_idx]--;
			vec[mn_idx]++;
		}
		cout << "#" << i << " " << *max_element(vec.begin(),vec.end()) -  *min_element(vec.begin(), vec.end()) << "\n";
	}
	return (0);
}