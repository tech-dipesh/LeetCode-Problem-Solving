class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // Hashmap:
        int three=nums.size()/3;
        unordered_map<int, int>mp;
        vector<int>vt;
        for(int i:nums){
            mp[i]++;
        }
        for(auto i:mp){
            if(i.second>three){
                vt.push_back(i.first);
            }
        }
        return vt;
    }
};