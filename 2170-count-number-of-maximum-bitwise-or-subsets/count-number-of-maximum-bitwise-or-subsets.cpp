class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int highor = 0, res = 0, n = nums.size();
        for (int num : nums) {
            highor |= num;
        }

        for (int i = 1; i < 1<<n; i++) {
            int cor = 0;
            for (int j = 0; j < n; j++) {
                int right = i >> j;
                if (right & 1) cor |= nums[j];
            }
            if (cor == highor)res++;
        }
        return res;
    }
};