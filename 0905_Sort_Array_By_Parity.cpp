class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        if (A.size() == 1) return A;
        int writePointer = 0;
        for (int readPointer = 0; readPointer < A.size(); ++readPointer) {
            if (A[readPointer] % 2 == 0) {
                swap(A[writePointer++], A[readPointer]);
            }
        }
        return A;
    }
};

// O(n) Time
// O(1) Space
