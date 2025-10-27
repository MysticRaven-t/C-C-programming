#include <bits/stdc++.h> 

int main()
{
	int n;
	std::cin >> n;
	
	if(n < -1000 || n > 1000){
		std::cerr << "Invalid input!" << std::endl;	
		return 1;
	}
	
	if(n>0)
	std::cout << 1 << std::endl;
	if(n==0)
	std::cout << 0 << std::endl;
	if(n<0)
	std::cout << -1 << std::endl;
	
	return 0;
}
