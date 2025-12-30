class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        
        int n=nums.size();
        int max=nums[0];
        int min=nums[0];
       
       for(int i=0;i<n-1;i++){
          if(nums[i+1]>=nums[i]){
             max=nums[i+1];
            }
        if(nums[i+1]<nums[i]){
            min=nums[i+1];
                break;
        }
       }
       if(max==min) return -1;
        return min;
          
    }
};
