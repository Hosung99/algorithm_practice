#include <iostream>
#include <stack>
using namespace std;
stack<char> st;
string str;
int ans;
int main()
{
	cin >> str;
	for(int i = 0; i < str.length(); i++)
		st.push(str[i]);
	while (!st.empty())
	{
		int temp = 1;
		if (st.top() == ')')
		{
			st.pop();
			if (st.top() == ']')
			{
				while (!st.empty() || st.top() != '[')
				{
					if (st.top() == ')')
					{
						
					}
					st.pop();
				}
			}
		}
		ans += temp;
	}
	return (0);
}