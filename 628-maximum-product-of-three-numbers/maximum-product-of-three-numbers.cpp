class Solution {
public:
    int maximumProduct(vector<int>& nums) {
    //   int res=1;
      sort(nums.begin(), nums.end());
    //   for(int i:nums){

    //   }   
    // for(int i=nums.size()-3;i<nums.size();i++){
    //     res*=nums[i];
    // }
    int n=nums.size()-1;
    int res=max(nums[0] * nums[1] * nums[n], nums[n] * nums[n-1] * nums[n-2]);
    return res;
    }
};