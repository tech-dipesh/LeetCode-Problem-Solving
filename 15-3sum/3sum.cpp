class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>>res;
        for(int i=0;i<nums.size();i++){
            int j=i+1, k=nums.size()-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==0){
                    res.insert({nums[i], nums[j], nums[k]});
                    k--;
                    
                }
               else if(sum>0){
                    k--;
                }
                else{
                    j++;
                }
                
            }
        }
        vector<vector<int>>vt(res.begin(), res.end());
        return vt;
    }
};