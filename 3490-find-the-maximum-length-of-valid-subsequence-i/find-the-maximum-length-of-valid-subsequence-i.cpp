class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int firstMod=nums[0]%2, odd=0, even=0, bothNum=0;
        for (int i : nums) {
            if (i % 2 == 0) {
                even++;
            } else {
                odd++;
            }
            if (i % 2 == firstMod) {
                bothNum++;
                firstMod=1-firstMod; 
            }
        }
        int maxEvenOdd=max(even, odd);
        int bothEvenOdd=max(maxEvenOdd, bothNum);
        return bothEvenOdd;
    }
};