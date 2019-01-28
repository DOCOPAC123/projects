class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        // first flip an image horizontally
        int n = A.size();
        for(int i=0;i<n;i++)
        {
            // now reverse each row
            int row=i;
            int l = 0;
            int m = n-1;
            while(m>l)
            {
                int temp;
                temp = A[row][l];
                A[row][l] = A[row][m];
                A[row][m] = temp;
                l = l + 1;
                m = m - 1;
            }
            
        }
        
        // now invert the image
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(A[i][j]==0)
                {
                    A[i][j]=1;
                }
                else
                {
                    A[i][j]=0;
                }
            }
        }
        return A;
    }
};
