class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int>res;
        int size=nums.size();
        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                if(abs(i-j)<=k && nums[j]==key){
                     res.push_back(i);
                break;
                }
            }
        }
        return res;
    }
};