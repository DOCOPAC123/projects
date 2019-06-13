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
	    int num;
	    cin >> num;
	    vector<int> cars;
	    vector<int> penalty;
	    int temp;
	    for(int i=0;i<n;i++)
	    {
	        cin >> temp;
	        cars.push_back(temp);
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin >> temp;
	        penalty.push_back(temp);
	    }
	    
	    int flag;
	    if(num%2==0)
	    {
	        flag = 1;
	    }
	    else
	    {
	        flag = 0;
	    }
	    
	    // 1 if for even dates, 0 is for odd dates.
	    int ans=0;
	    for(int i=0;i<n;i++)
	    {
	        // if date i even, fine from odd cars
	        if(flag == 1)
	        {
	            // consider odd one
	            if(cars[i]%2==1)
	            {
	                ans = ans + penalty[i];
	            }
	        }
	        else
	        {
	            if(cars[i]%2==0)
	            {
	                ans = ans + penalty[i];
	            }
	        }
	    }
	    cout << ans << "\n";
	}
	return 0;
}
