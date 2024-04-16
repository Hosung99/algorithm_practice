#include <iostream>
#include <stack>
using namespace std;
int N,ans;
string str;
int main()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		stack<char> st;
		cin >> str;
		for(int j = 0; j < str.length(); j++)
		{
			if (!st.empty() && st.top() == str[j])
				st.pop();
			else
				st.push(str[j]);
		}
		if (st.size() == 0)
			ans++;
	}
	cout << ans;
	return (0);
}