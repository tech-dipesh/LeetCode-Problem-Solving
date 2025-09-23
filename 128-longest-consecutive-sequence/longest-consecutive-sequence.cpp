class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    // Brute Force with first sort the elementt and then findind ghte adjancent element is they exist just keep counting, and at last just find max count.
     sort(nums.begin(), nums.end());
     if(nums.size()==0) return 0;
    int result=1, count=1;
    for(int i=1;i<nums.size();i++){
        // don't need to check when the left element and that element is same
        if(nums[i]==nums[i-1]){
            continue;
        }
        if(nums[i]==nums[i-1]+1){
        count++;
        }
        else{
            count=1;
        }
        result=max(result, count);
    }
    return result;
    }
};