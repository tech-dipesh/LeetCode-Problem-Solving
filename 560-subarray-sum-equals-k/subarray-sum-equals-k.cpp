class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // T.C: o(n) S.C.: o(n) due to have to store the every element it take at least n size.
        unordered_map<long long, int>beforeSum;
        long long sum=0;
        int count=0;
        beforeSum[0]=1;
         for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            long long rem=sum-k;
            if(beforeSum.find(rem)!=beforeSum.end()){
            count+=beforeSum[rem];
            }
            beforeSum[sum]++;
         }
            return count;
            }
};