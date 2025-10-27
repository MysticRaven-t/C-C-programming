#include<bits/stdc++.h>
using namespace std;
const int maxn=110;
struct baowu{
	int m;
	int v;
	double price;
};
int main()
{
	int t,n;
	baowu a[110];
	cin>>t>>n;
	for(int i=0;i<n;i++){
		cin>>a[i].m>>a[i].v;
		a[i].price=double(1.0*a[i].v/a[i].m);
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i].price<a[j].price){
				swap(a[i].price,a[j].price);
				swap(a[i].m,a[j].m);
				swap(a[i].v,a[j].v);
			}
		}
	}
	double total=0;
	while(t>0){
		int i=0;
		while(true){
			if(t>a[i].m){
				total+=a[i].v;
				t-=a[i].m;
			}
			else if(t<a[i].m){
				total+=t*a[i].price;
				t-=a[i].m;
				break;
			}
			i++;	
		}
	}
	cout<<fixed<<setprecision(2)<<total<<endl;

	return 0;
}
