#include<stdio.h>
/*
功能：计算整型数的各位数的和
形参：为一个整数x 
返回值：为整型数 
*/
int calcSumOfNumber(int x)
{
	int sum=0;
	while(x){
	sum+=x%10;
	x/=10; 
	} return sum;
}
int main()
{
	int x;
	scanf("%d", &x);
	printf("%d\n", calcSumOfNumber(x));
	
	return 0;
}
