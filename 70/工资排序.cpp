#include<bits/stdc++.h>
using namespace std;
struct staff{
	string name;
	double a,b,c,x;
}arr[110];
void bubbleSort(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-1; j++) {
            if (arr[j].x < arr[j + 1].x) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
int main()
{
	int n;
	cin>>n; 
	for(int i=0;i<n;i++){
		cin>>arr[i].name >>arr[i].a >>arr[i].b >>arr[i].c ;
		arr[i].x =arr[i].a +arr[i].b +arr[i].c;
	}
	bubbleSort(n);
	for(int i=0;i<n;i++){
		cout<<arr[i].name <<" "<<fixed<<setprecision(2)<<arr[i].x<<endl; 
	}
	return 0;
}
