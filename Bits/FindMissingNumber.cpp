#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int temp;
	    int missing = 0;
	    for(int i=1;i<n;i++)
	    {
	        cin >> temp;
	        missing = missing ^ temp;
	    }
	    for(int i=1;i<=n;i++)
	    {
	        missing = missing ^ i;
	    }
	    cout << missing << "\n";
	}
	return 0;
}
