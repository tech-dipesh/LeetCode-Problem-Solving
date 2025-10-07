class Solution {
public:
    void sortColors(vector<int>& nums) {
        //Better Algorithm, with counting how many times it appeared
        int zeroes=0, ones=0, twos=0;
       for(int i: nums){
        if(i==0){
            zeroes++;
        }
        if(i==1){
            ones++;
        }
        if(i==2){
            twos++;
        }
       }
       int i=0; 
       while(zeroes--){
        nums[i++]=0;
       }
       while(ones--){
        nums[i++]=1;
       }
       while(twos--){
        nums[i++]=2;
       }
    }
};