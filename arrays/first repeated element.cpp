//By hash map  Time complexity=O(n)

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
       unordered_map<int,int>hash;
       for(int i=0;i<n;i++)
       {
        hash[nums[i]]++;
       }
       for(int i=0;i<n;i++)
       {
        if(hash[nums[i]]>1)
        {
            return nums[i];
        }
       }
        return -1;
    }
};

//by optimal solution Time complexity=O(n), by swapping the value at right position

class Solution {
public:
    int findDuplicate(vector<int>& nums) {  
    int n = nums.size();
    int i=0;
    while(i<n){
        int correctidx = nums[i];   
        if(nums[correctidx] == nums[i]) return nums[i];    
        else swap(nums[correctidx],nums[i]);  
    
    }
    return 100;
        
    }
};

// positioning method   Time complexity = O(n)
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
      while(nums[0]!=nums[nums[0]])
      {
        swap(nums[0],nums[nums[0]]);
        
      }
      return nums[0];
    }
};


