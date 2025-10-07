class Solution {
public:
    void sortColors(vector<int>& nums) {
        // Dutch Flag Algorithm
     int low=0, medium=0, high=nums.size()-1;
     while(medium<=high){
        if(nums[medium]==0){
            swap(nums[medium], nums[low]);
            low++;
            medium++;
        }
       else if(nums[medium]==1){
            medium++;
        }
        else{
            swap(nums[medium], nums[high]);
            high--;
        }
     }
    }
};