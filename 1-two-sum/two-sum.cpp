class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    // Hashmap: T.c.: O(N) and S.C.: O(N).
    unordered_map<int, int>mp;
    for(int i=0;i<nums.size();i++){
        int sub=target-nums[i];
        if(mp.find(sub)!=mp.end()){
            return {mp[sub], i};
        }
        mp[nums[i]]=i;
    }
    return {};
    }
};