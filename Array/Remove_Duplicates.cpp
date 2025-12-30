class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n= nums.size();
       
       
          vector<int> v;

        int unique = nums[0];
        int count =1;
        v.push_back(nums[0]);

        for(int i=1;i<n;i++){
            
            if(nums[i]!=unique){
                unique= nums[i];
                count++;
                v.push_back(nums[i]);
            }
        }

           // Copy unique elements back into nums for leetcode style
        for (int i = 0; i < v.size(); i++) {
            nums[i] = v[i];  // recommended by chatgpt
        }

        return count;
    }
};
