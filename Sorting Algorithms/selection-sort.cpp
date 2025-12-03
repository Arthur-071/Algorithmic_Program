revise for indexing part

class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
        int n= nums.size();
       for(int i=0;i<n-1;i++){
           int index=i;
           for(int j=i+1;j<n;j++){
              if(nums[j]<nums[index]){
                index=j;
              }
           }

           swap(nums[i],nums[index]);
       }
        return nums;
    }
};
