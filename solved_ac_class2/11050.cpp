#include <iostream>
using namespace std;
int N,K,ans;

int	factorial(int index)
{
	if (index <= 1)
		return (1);
	return (factorial(index - 1) * index);
}

int main()
{
	cin >> N >> K;
	cout << factorial(N) / (factorial(K) * (factorial(N - K)));
	return (0);
}
