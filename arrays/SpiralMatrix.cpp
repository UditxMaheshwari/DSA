class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int t=m*n;
        vector<int>ans;
        int firstrow=0;
        int lastcolumn=n-1;
        int lastrow=m-1;
        int firstcolumn=0;

        int count=0;
        while(count<t)
        {
       for(int i=firstcolumn;i<=lastcolumn && count<t;i++)
       {
        ans.push_back(matrix[firstrow][i]);
        count++;
       }
        firstrow++;
       for(int i=firstrow;i<=lastrow && count<t;i++)
       {
        ans.push_back(matrix[i][lastcolumn]);
        count++;
       }
       lastcolumn--;
       for(int i=lastcolumn;i>=firstcolumn && count<t;i--)
       {
        ans.push_back(matrix[lastrow][i]);
       count++;
       }
        lastrow--;
       for(int i=lastrow;i>=firstrow && count<t;i--)
       {
        ans.push_back(matrix[i][firstcolumn]);
         count++;
    }
       firstcolumn++;
        }
   return ans;
    }
};
