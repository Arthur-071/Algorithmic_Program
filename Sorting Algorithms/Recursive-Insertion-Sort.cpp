class Solution {
public:

  
   void isort(vector<int>& nums,int low) {
       
            int i=low;
            int key = nums[i];       
            int j = i - 1;

            
            while (j >= 0 && nums[j] > key) {
                nums[j + 1] = nums[j];
                j--;
            }

            nums[j + 1] = key;      
        
    
    }

    void isortrecursive(vector<int>& nums,int n){
        if(n<=1) return;
        isortrecursive(nums,n-1);
        isort(nums,n-1);
       
    }

    vector<int> insertionSort(vector<int>& nums) {
           int n=nums.size();
         
           isortrecursive(nums,n);
           return nums;
    }
};
