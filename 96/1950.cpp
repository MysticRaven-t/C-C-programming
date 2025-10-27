#include <stdio.h>


int calcDays(int year, int month, int day)
{
	int sum=0;
	if(year%4==0 && year%100!=0 || year%400==0)
	{
		while(month>0)
		{
			month--;
			if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
			sum+=31;
			else if(month==2)
			sum+=29;
			else if(month==4 || month==6 || month==9 || month==11)
			sum+=30;		
		}
		sum+=day;	
	}
	else
	{
		while(month>0)
		{
			month--;
			if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
			sum+=31;
			else if(month==2)
			sum+=28;
			else if(month==4 || month==6 || month==9 || month==11)
			sum+=30;		
		}	
		sum+=day;
	}
	return sum;
} 
int main()
{
	int T;
	scanf("%d", &T);
	while (T--)
	{
		int year, month, day;
		scanf("%d/%d/%d", &year, &month, &day);
		printf("%d\n", calcDays(year, month, day));
	}
	return 0;
}
