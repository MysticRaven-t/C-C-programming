#include <iostream>
using namespace std;

int main()
{
	int k;
	for(int i=1;i<10;i++)
	{
		for(int j=1;j<=9;j++)
		{
			k=i*j;
			cout<<i<<"*"<<j<<"="<<k<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}

