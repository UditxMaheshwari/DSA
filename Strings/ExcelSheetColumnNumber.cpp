class Solution {
public:
    int titleToNumber(string columnTitle) {
        int start=0;
        int n=columnTitle.size();
         long long result=0;
         

         for(int i=0;i<n;i++)
         {
            char ch=columnTitle[i];
            result= result*26+ ch-'A'+1;
         }
         return result;
    }
};
