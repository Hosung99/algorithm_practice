#include <iostream>

using namespace std;
int N;
int total_y,total_m;
int y_cnt,m_cnt;
int main()
{
	cin >> N;
	for(int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;
		int temp2 = temp;
		while (temp >= 0)
		{
			temp -= 30;
			y_cnt++;
		}
		while (temp2 >= 0)
		{
			temp2 -= 60;
			m_cnt++;
		}
	}
	total_y = y_cnt * 10;
	total_m = m_cnt * 15;
	if (total_y > total_m)
		cout << "M " << total_m;
	else if (total_y < total_m)
		cout << "Y " << total_y;
	else
		cout << "Y M " << total_y;
	return (0);
}