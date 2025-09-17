//Two pointer approach   Time complexity=O(n)
    int n=nums.size();
      int start=0;
      int end=1;
      int ans=nums[0];
      for(int i=0;i<n-1;i=i+2)
      {
         if(nums[i]==nums[i+1])
         {
            start=start+2;
            end=end+2;
            ans=nums[n-1];
         }
         else
         {
           ans=nums[start];
           break;
         }
      }
      return ans;

//Optimal solution by binary search   Time complexity=O(logn)

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
       
         int start=0;
         int end=nums.size()-1;
         int mid=start+(end-start)/2;
         while(start<end)
         {
            if(mid%2==1)
            {
                mid--;
            }
            if(nums[mid]==nums[mid+1])
            {
                start=mid+2;
            }
            else{
                end=mid;
            }
            mid=start+(end-start)/2;
         }   
         return nums[start];
    }
};
