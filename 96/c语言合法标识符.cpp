#include<bits/stdc++.h>
using namespace std;
string s;
int main()
{
	int n;
	cin>> n;
	cin.ignore();
	while(n--){
		getline(cin,s);
		int len=s.length();
		if(s[0]>='0' && s[0]<='9'){
			cout<<"no"<<endl;
			continue;
		}
		bool islegal=true;
		for(int i=0;i<len;i++){ 
			if (!((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') 
			|| (s[i] >= '0' && s[i] <= '9') || s[i] == '_')) {
                cout << "no" << endl;
                islegal=false;
                break;
            	}
		}
		if(islegal)
		cout<<"yes"<<endl;
	}
	return 0;
}
