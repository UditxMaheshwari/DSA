//optimal solution
class Solution {
public:
    void sortColors(vector<int>& nums) {
      //using two pointers
       int low =0 , mid = 0 , high = nums.size()-1;

       while(mid <= high){
        if(nums[mid] == 0 ){
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if(nums[mid] == 1){
            mid++;
        }
        else{
            swap(nums[mid], nums[high]);
            high--;
        }
       }
    }
};

//brute force 

class Solution {
public:
    void sortColors(vector<int>& nums) {
          int one=0,two=0,three=0;
          for(int i=0;i<nums.size();i++)
          {
            if(nums[i]==0)
            {
                one++;
            }
            if(nums[i]==1)
            {
                two++;
            }
            if(nums[i]==2)
            {
                three++;
            }
          }
              int i=0;
             while(one--)
             {
                nums[i]=0;
                i++;
             }
             while(two--)
             {
                nums[i]=1;
                i++;
             }
             while(three--)
             {
                nums[i]=2;
                i++;
             }
          }
};


