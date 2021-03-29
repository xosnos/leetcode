class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int writePointer = 0;
        for (int readPointer = 0; readPointer < nums.size(); ++readPointer) {
            if (nums[readPointer] != val) {
                nums[writePointer++] = nums[readPointer];
            }
        }
        return writePointer;
    }
};

// O(n) Time
// O(1) Space
