class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {
        int n = nums.size();
        for (int i = 1; i < n; i++) {
            int key = nums[i];       // Current element to insert
            int j = i - 1;

            // Shift elements greater than key to one position ahead
            while (j >= 0 && nums[j] > key) {
                nums[j + 1] = nums[j];
                j--;
            }

            nums[j + 1] = key;       // Insert key at correct position
        }
        return nums;
    }
};
