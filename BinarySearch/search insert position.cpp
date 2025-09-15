class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        int mid=start+(end-start)/2;
        int ans=end;
        while (start <= end) {
            if (nums[mid] == target) {
                return mid;
            }
            else if (nums[mid] > target) {
                ans=mid;
                end = mid - 1;
            }
            else {
                
                start = mid + 1;
                ans=start;
            }
             mid = start + (end - start) / 2; 
        }
        return ans;
    }
};
