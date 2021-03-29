class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int front = 0;
        int back = nums.size() - 1;
        int squared;
        
        vector<int> sorted;
        sorted.resize(nums.size(), 0);
        
        for (int i = nums.size() - 1; i >= 0; --i) {
            if (abs(nums[front]) < abs(nums[back])) {
                squared = nums[back--];
            } else {
                squared = nums[front++];
            }
            sorted[i] = squared * squared;
        }
        return sorted;
    }
};

// O(n) Time
// O(n) Space
