class Solution{	
	public:
		bool isSorted(vector<int>& nums){
			int n=nums.size();
             for(int i=0;i<n-1;i++){
                if(nums[i]<=nums[i+1]){
                    continue;
                }

                else return 0;
             }

                  return 1;
		}
};
