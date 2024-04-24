#include <iostream>
#include <algorithm>
using namespace std;
int N, cnt;
string word;
int board[26];
int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> N;
	N--;
	cin >> word;
	int word_len = word.length();
	for (int i = 0; i < word_len; i++)
		board[word[i] - 'A']++;
	while (N--)
	{
		string str;
		int temp[26];
		int same_cnt = 0;
		copy(board, board + 26, temp);
		cin >> str;
		int str_len = str.length();
		for (int i = 0; i < str.length(); i++)
		{
			if (temp[str[i] - 'A'] > 0)
			{
				temp[str[i] - 'A']--;
				same_cnt++;
			}
		}
		if (word_len == str_len)
		{
			if (same_cnt == word_len || same_cnt == word_len - 1)
				cnt++;
		}
		else if (word_len - 1 == str_len)
		{
			if (same_cnt == word_len - 1)
				cnt++;
		}
		else if (word_len + 1 == str_len)
		{
			if (same_cnt == word_len)
				cnt++;
		}
	}
	cout << cnt;
	return (0);
}