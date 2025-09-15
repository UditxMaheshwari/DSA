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

//by optimal solution Time complexity=O(n)

lass Solution {
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
