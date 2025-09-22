// User function Template for C++
class Solution {
  public:
    int findTarget(vector<int>& arr, int target) {
       int start=0;
       int end=arr.size()-1;
       int mid=start+(end-start)/2;
        
        while(start<=end)
        {
            if(arr[mid]==target)
            {
                return mid;
            }
            else if(mid+1<=end && arr[mid+1]==target)
            {
                return mid+1;
            }
            else if(mid-1>=start && arr[mid-1]==target)
            {
                return mid-1;
            }
            
            if (arr[mid] > target) {
                end = mid - 2;   
            } else {
                start = mid + 2; 
            }
            mid= start+(end-start)/2;
        }
        return -1;
    }
};
