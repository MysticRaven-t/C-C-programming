#include<stdio.h>
/*
���ܣ������������ĸ�λ���ĺ�
�βΣ�Ϊһ������x 
����ֵ��Ϊ������ 
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
