class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //Bit Manipulation
        int num = 0;
        for (int i = 0; i < nums.size(); ++i) {
            num ^= nums[i];
        }
        return num;
    }
    // O(n) Runtime
    // O(1) Extra Memory
    int singleNumberSet(vector<int>& nums) {
        //Hash Set
        unordered_set<int> s;
        for (int i = 0; i < nums.size(); ++i) {
            if (s.find(nums[i]) == s.end()) {
                s.insert(nums[i]);
            } else {
                s.erase(nums[i]);
            }
        }
        return *(s.begin());
    }
    // O(n) Runtime
    // O(n) Extra Memory
};
