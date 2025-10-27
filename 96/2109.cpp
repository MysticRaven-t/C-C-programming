#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n, a,b=0;
        cin >> m >> n;
        for (int i = m; i <= n; i++)
        {
            a = i;
            if (a == ((a / 100) % 10) * ((a / 100) % 10) * ((a / 100) % 10) + ((a / 10) % 10) * ((a / 10) % 10) * ((a / 10) % 10) +
                (a % 10) * (a % 10) * (a % 10))
                {
					b++;
					if(b==1) cout<<a;
					else cout<<" "<<a;
				}
    	}
    	if(b==0)
    	cout<<"no"<<endl;
    }
    cout<<endl;
    return 0;
}
