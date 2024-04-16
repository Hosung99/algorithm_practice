#include <iostream>
#include <stack>
using namespace std;
stack<char> s;
int main()
{
	while(1)
	{
		string input;
		bool flag = true;
		getline(cin, input);
		if (input[0] == '.')
			break ;
		for(int i = 0; i < input.size(); i++)
		{
			if (input[i] == '(' || input[i] == '[')
				s.push(input[i]);
			else if (input[i] == ')' || input[i] == ']')
			{
				if (s.empty())
					flag = false;
				else if (!s.empty())
				{
					if (input[i] == ')')
					{
						if (s.top() != '(')
							flag = false;
						s.pop();
					}
					if (input[i] == ']')
					{
						if (s.top() != '[')
							flag = false;
						s.pop();
					}
				}

			}
		}
		if (flag && s.empty())
			cout << "yes" << "\n";
		else
			cout << "no" << "\n";
		while (!s.empty())
			s.pop();
	}
	return (0);
}