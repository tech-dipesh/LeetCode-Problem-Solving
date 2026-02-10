class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int output=0;
        unordered_set<int>odd;
        unordered_set<int>even;
        for(int i=0;i<nums.size()-1;i++){
             odd.clear();
            even.clear();
            for (int j = i; j < nums.size(); j++){
                int bit=nums[j]&1;
                if (bit == 1) odd.insert(nums[j]);
                else even.insert(nums[j]);
                if (odd.size() == even.size()){
                    int longer=j-i+1;
                    output = max(output, longer);
                }
            }
        }
        return output;
    }
};