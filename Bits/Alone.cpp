
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
	    int alone=0;
	    int temp;
	    for(int i=0;i<n;i++)
	    {
	        cin >> temp;
	        alone = alone ^ temp;
	    }
	    cout << alone << "\n";
	}
	return 0;
}
