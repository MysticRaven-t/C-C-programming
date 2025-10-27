#include <bits/stdc++.h> 

int main()
{
	char ch;
	std::cin >> ch;
	
	if ((ch >= 'A' && ch <= 'z') || (ch >= 'a' && ch <= 'z'))
		std::cout << 1 << std::endl;
	else if(ch >= '0' && ch <= '9')
		std::cout << 0 << std::endl;
	else
		std::cout << -1 << std::endl;	
		
	return 0;
}
