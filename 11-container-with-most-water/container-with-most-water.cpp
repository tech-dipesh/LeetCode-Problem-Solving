class Solution {
public:
    int maxArea(vector<int>& height) {
        int totalSum=0;
        int left=0, right=height.size()-1;
        while(left<right){
            int totalSize=right-left;
            int minValue=min(height[left], height[right]);
            totalSum=max(totalSum, minValue*totalSize);
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
            
        }
        return totalSum;
    }
};