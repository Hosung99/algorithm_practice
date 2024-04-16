#include <iostream>

using namespace std;
int arr[8];
int check,c;
int main()
{
	for(int i = 0; i < 8; i++)
		cin >> arr[i];
	check = arr[0];
	for(int i = 1; i < 8; i++)
	{
		if (check < arr[i])
		{
			if (i != 1 && c != 1)
			{
				cout << "mixed";
				return (0);
			}
			check = arr[i];
			c = 1;
		}
		else if(check > arr[i])
		{
			if (i != 1 && c != 2)
			{
				cout << "mixed";
				return (0);
			}
			check = arr[i];
			c = 2;
		}
	}
	if (c == 2)
		cout << "descending";
	else if (c == 1)
		cout << "ascending";
	return (0);
}