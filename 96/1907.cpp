#include <bits/stdc++.h>

int main()
{	
	int a;
	
	std::cin>> a;
	
	if(a%4==0){
	std::cout<<a/4 << ' ' <<a/2<<std::endl;
	}
	else if(a%4!=0 && a%2==0)
	std::cout<<a/4+1<< ' ' <<a/2<<std::endl;
	
	else {
	std::cout<<"0 0"<<std::endl;
	}
	

	return 0;
}
