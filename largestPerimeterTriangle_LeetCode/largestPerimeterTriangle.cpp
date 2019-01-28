// Just sort the array in decreasing order and take then take the starting 3 inputs
// and check the condition of triangle and if at any time the condition is found then ok else ok.
/*
 
 author : Rohit Chauhan
    
*/
class Solution {
  

public:
    int largestPerimeter(vector<int>& A) {
        sort(A.begin(),A.end(),greater<>());
        int n = A.size();
        int perimeter=0;
        for(int i=0;i<n-2;i++)
        {
            if(A[i]< (A[i+1]+A[i+2]))
            {
                if((A[i]+A[i+1]+A[i+2] )>perimeter)
                {
                    perimeter = A[i]+A[i+1]+A[i+2];
                }
            }
        }
        return perimeter;
    }
};
