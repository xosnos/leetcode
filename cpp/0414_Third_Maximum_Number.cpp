class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int, greater<int> > s;
        for (int i = 0; i < nums.size(); ++i) {
            s.insert(nums[i]);
            if (s.size() > 3) {
                s.erase(*(s.rbegin()));
            }
        }
        if (s.size() < 3) {
            return *(s.begin());
        } else {
            return *(s.rbegin());
        }
    }
};

// O(n) Time
// O(1) Space
