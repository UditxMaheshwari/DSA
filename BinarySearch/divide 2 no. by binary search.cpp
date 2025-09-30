class Solution {
public:
    int divide(int dividend, int divisor) {
        int start=0;
        int end=abs(dividend);
        int mid=start+(end-start)/2;
        int ans=0;

        while(start<=end)
        {
            if(abs(mid * divisor)==abs(dividend))
            {
                ans=mid;
                break;
            }
            else{
                if(abs(mid*divisor)>abs(dividend))
                {
                    end=mid-1;
                }
                else{
                    ans=mid;
                    start=mid+1;
                }
            
            }
           mid= start+(end-start)/2;
        }

         if((dividend<0 && divisor<0)||(dividend>0 && divisor>0))
         {
            ans=ans;
         }
         else
         {
            ans=-ans;
         }

        return ans;
    }
};
