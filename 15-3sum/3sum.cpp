class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    // Two Pointer Approach
    sort(nums.begin(), nums.end());
    set<vector<int>>st;
    unordered_map<int, int>mp;
    for(int i=0;i<nums.size();i++){
        int j=i+1;
        int k=nums.size()-1;
        // the j will be start from left while k from right as it already sorted we can compute two pointer.
        while(j<k){
            int sum=nums[i]+nums[j]+nums[k];
            if(sum==0){
                st.insert({nums[i], nums[j], nums[k]});
                k--;
            }
            if(sum>0){
                k--;
            }
            else{
             j++;
            }
        }
    }
        return vector<vector<int>>(st.begin(), st.end());
    }
};