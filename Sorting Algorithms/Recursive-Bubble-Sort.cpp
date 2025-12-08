class Solution {
public:
  
  void sort(vector<int>& nums, int low, int high){
   
     
     for(int j=low;j< high;j++){
        if(nums[j]>nums[j+1]){
            swap(nums[j],nums[j+1]);
        
        }

        
     }
    
  }

  void bubblepass(vector<int>& nums, int low, int high){
    if(high<=low) return;
        sort(nums,low,high);
        bubblepass(nums,low,high-1);
  }
 
    vector<int> bubbleSort(vector<int>& nums) {
       int n=nums.size();
       int high=n-1;
       bubblepass(nums,0,high);

       return nums;
    }
};
