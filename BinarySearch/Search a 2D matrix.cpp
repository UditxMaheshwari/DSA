class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int start=0;
        int m=matrix.size();
        int n=matrix[0].size();
        int end=(m*n)-1;
        int mid=start+(end-start)/2;
        while(start<=end)
    {
        int rowindex=mid/n;
        int colindex=mid%n;
        if(matrix[rowindex][colindex]==target)
        {
            return true;
        }
        if(matrix[rowindex][colindex]>target)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
         mid=start+(end-start)/2;
    }
    return false;
    
    }
};
