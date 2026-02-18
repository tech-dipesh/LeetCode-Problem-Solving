class Solution {
public:
    bool hasAlternatingBits(int n) {
        int allPrev = n & 1;
        n = n >> 1;
        while (n > 0) {
            int prev = n & 1;
            if (allPrev == prev) {
                return false;
            }
            allPrev = prev;
            n = n >> 1;
        }
        return true;
        
    }
};