class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        // Base Case
        if (nums.size() == 1) return;
        
        // Two Pointers Method
        int j = 0;
        // Loop entire array, moving nonzeros to the front
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != 0) {
                nums[j] = nums[i];
                ++j;
            }
        }
        // Change values at the end of array to zero
        for (; j < nums.size(); ++j) {
            nums[j] = 0;
        }
    }
};

// O(n) Time
// O(1) Space
