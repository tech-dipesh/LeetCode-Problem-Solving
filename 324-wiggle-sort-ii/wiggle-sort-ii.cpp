class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int>temp(nums);
        sort(temp.begin(), temp.end());
        int n=nums.size();
        int i=0, j=n-1;
        int k=j/2+1;
        while(j>=0){
            // For Odd index
                if(j%2==1){
                    nums[j]=temp[k++];
                }
                else{
                    nums[j]=temp[i++];
                }
                j--;
        }
    }
};