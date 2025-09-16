class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int end=0;
        for(int start=0;start<n;start++)
        {
           if(nums[start]!=0)
           {
              nums[end]=nums[start];
              end++;
           }
        }
        while(end<n)
        {
            nums[end]=0;
            end++;
        }
    }
};
