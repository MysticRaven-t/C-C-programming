#include<bits/stdc++.h>
using namespace std;
struct Student{
	string id,name;
	int score;
}; 
int max_num(int score[],int n){
	int maxn=score[0],k;
	for(int i=1;i<n;i++){
		if(score[i]>maxn){
			maxn=score[i];
			k=i;
		}
	}
	return k;
}
int min_num(int score[],int n){
	int minn=score[0],k;
	for(int i=1;i<n;i++){
		if(score[i]<minn){
			minn=score[i];
			k=i;
		}
	}
	return k;
}
int main()
{
	const int N=10000;
	Student stu[N];
	int n,num1,num2;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>stu[i].name >>stu[i].id >>stu[i].score ;
	}
	num1=max_num(stu.score ,n);
	num2=min_num(stu.score ,n);
	cout<<stu[num1].name<<" "<<stu[num1].id<<endl;
	cout<<stu[num2].name<<" "<<stu[num2].id<<endl;
	
	
	
	return 0;
 } 
