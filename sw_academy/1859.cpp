#include <iostream>
#include <vector>
using namespace std;
int T;
int main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin >> T;
	for(int i = 1; i <= T; i++)
	{
		long long temp = 0;
		int input;
		cin >> input;
		vector<int> vec;
		for(int i = 0; i < input; i++)
		{
			int in;
			cin >> in;
			vec.push_back(in);
		}
		int index = vec.back();
		for(int i = input - 2; i >= 0; i--)
		{
			if(vec[i] < index)
				temp += index - vec[i];
			else
				index = vec[i];
		}
		cout << "#" << i << " " << temp << "\n";
	}
	return (0);
}