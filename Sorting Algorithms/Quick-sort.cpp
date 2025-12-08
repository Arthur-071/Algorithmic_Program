class Solution {
public:
    int qshelper(vector<int>& nums, int low,int high){
        int pivot=low;
        int i=low;
        int j=high;
        while(i<j){
            while( nums[i]<=nums[pivot] && i<=high-1){
                i++;
            }

            while(nums[j]>=nums[pivot]&& j>=low+1){
                j--;
            }

            if(i<j){
                
                swap(nums[i],nums[j]);
            }

           }

         swap(nums[pivot],nums[j]);
        return j;
    }

    void qs(vector<int>& nums, int low,int high){
            if (low < high) {

            int p = qshelper(nums, low, high);
               qs(nums, low, p - 1);
               qs(nums, p + 1, high);
        }
    }

    vector<int> quickSort(vector<int>& nums) {
           int n=nums.size();
           int high= n-1;
           int low=0;

           qs(nums,low,high);
           return nums;
          
    }
};
