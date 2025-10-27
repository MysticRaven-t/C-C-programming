#include <iostream>
using namespace std;

int main()
{
	int number, i,T;
	cin >>T;
	while(T--)
	{
	cin >> number;
	for (i = 2; i <= number - 1; i++)
	{
		if (number % i == 0)
			break;
	}
	if (i < number)
		cout << "no" << endl;
	else
		cout << "yes" << endl;
	}
	return 0;
}
