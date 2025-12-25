class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        // sort by increasing order
         sort(happiness.begin(), happiness.end(), greater<int>());
        long long res = 0;
        for (int i = 0; i < k; i++) {
            int curr =    happiness[i] - i;
            if (curr <= 0) break;
            res += curr;
        }
        return res;
    }
};