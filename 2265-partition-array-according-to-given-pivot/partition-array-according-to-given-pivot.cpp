class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        // Brute force:
        vector<int>res;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot){
                res.push_back(nums[i]);
            }
        }
        // for same value
        for(int i=0;i<nums.size();i++){
            if(nums[i]==pivot){
                res.push_back(nums[i]);
            }
        }
        // For greater value:
        for(int i=0;i<nums.size();i++){
            if(nums[i]>pivot){
                res.push_back(nums[i]);
            }
        }
    return res;
    }
};