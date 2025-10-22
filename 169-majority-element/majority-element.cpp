class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //Hash Map o(n)+o(n)=o(n) and s.c.: o(n)
        int half=nums.size()/2;
    unordered_map<int, int>mp;
    for (int i : nums) 
        mp[i]++;
     for (auto i: mp) {
        if (i.second>half){
             return i.first;
        }
    }
    return -1;
    }
};