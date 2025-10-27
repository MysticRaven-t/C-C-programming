#include <iostream>

using namespace std;

const int N = 1e5+10;
int a[N];
int n;
 
int main() {
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for(int i = 0; i < n - 1; i++) {
		for(int j = 0;j < n - 1 - i; j++) {
			if(a[j] > a[j + 1]) swap(a[j],a[j + 1]);
		}
	}
	for(int i = 0; i < n; i++) {
		if(i > 0) cout << " ";
		cout << a[i];
	}
	cout << endl;
	return 0;
} 
