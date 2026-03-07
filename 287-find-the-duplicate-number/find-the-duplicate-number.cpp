class Solution {
public:
    int findDuplicate(vector<int>& nums) {
         int length = nums.size();
        int high = *max_element(nums.begin(), nums.end());
        // int H[high]={0};
        vector<int>H(high + 1, 0);
        for(int i=0;i<length;i++){
            H[nums[i]]++;
            if(H[nums[i]]>1){
                return nums[i];
            }
    }
        return -1;
    }
};