#include<stdio.h>
#include<math.h>
int main(){
	double x1,y1,x2,y2,x3,y3,a,b,c,s,area,S;
	scanf("%lf,%lf %lf,%lf %lf,%lf",&x1,&y1,&x2,&y2,&x3,&y3);
	a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	b=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
	c=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
	if((a+b>c)&&(a+c>b)&&(b+c>a)){
	S=(a+b+c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("组成三角形的周长=%.2lf，面积=%.2lf",S,area);
	}
	else{
	printf("这3个点不能组成三角形");
	}

	return 0;
}
