class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int>left(n, 0), right(n, 0), res(n, 0);
        int sum=0;
        for(int i=0;i<n;i++){
            left[i]=sum;
            sum+=nums[i];
        }
        sum=0;
         for(int i=n-1;i>=0;i--){
            right[i]=sum;
            sum+=nums[i];
        }
        for(int i=0;i<n;i++){
            res[i]=abs(left[i]-right[i]);
        }
        return res;
    }
};