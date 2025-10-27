#include <bits/stdc++.h> 

int main()
{
	int a;
	
	std::cin >> a;
	
	if((a%4==0 && a%100!=0)|| a%400==0)
	std::cout <<"Y"<<std::endl;
	
	else
	std::cout <<"N"<<std::endl;
	
	
	return 0;
}
