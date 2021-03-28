class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        // Base Case
        if (nums.size() == 1) return;
        
        // Two Pointers Method
        int writePointer = 0;
        // Loop entire array, moving nonzeros to the front
        for (int readPointer = 0; readPointer < nums.size(); ++readPointer) {
            if (nums[readPointer] != 0) {
                nums[writePointer++] = nums[readPointer];
            }
        }
        // Change values at the end of array to zero
        for (; writePointer < nums.size(); ++writePointer) {
            nums[writePointer] = 0;
        }
    }
};

// O(n) Time
// O(1) Space
