#include <bits/stdc++.h>

int main()
{	
	int n;
	std::cin >> n;
	
	if((n%4==0 && n%100!=0) || n%400==0)
	std::cout << "yes" << std::endl;
 	else
	std::cout << "no" << std::endl; 
	
	return 0;	
}

