class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        unsigned count = 0;
        for (unsigned i = 0; i < arr.size() - count; ++i) {
            if (arr[i] == 0) {
                ++count;
            }
        }
        if (count == 0) return;
        for (unsigned i = arr.size() - 1 - count; i > 0; --i) {
            if (arr[i] == 0) {
                arr[i + count] = arr[i];
                --count;
            }
            arr[i + count] = arr[i];
        }
        if (arr[0] == 0) {
            arr[1] = 0;
        }
    }
};

// O(n) Time
// O(1) Space
