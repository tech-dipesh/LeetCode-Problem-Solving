class Solution {
public:
    int trap(vector<int>& height) {
        // vector<int>preFix, suffix;
    //    int preFix[height.size()];
        // int suffix[height.size()];
        // prefix and suffix approach:
        int maxPrefix=0, maxSuffix=0, totalRain=0;
        int n=height.size();
          int preFix[n], suffix[n];
        preFix[0]=height[0], suffix[n-1]=height[n-1];
        for(int i=1;i<n;i++){
            preFix[i]=max(height[i], preFix[i-1]);
        } 
        for(int i=n-2;i>=0;i--){
            suffix[i]=max(height[i], suffix[i+1]);
            // maxSuffix=max(maxSuffix, suffix[i]);
        }

        for(int i=0;i<height.size();i++){
            if(height[i]<preFix[i] && height[i]<suffix[i]){
                int totalLength=min(preFix[i], suffix[i])-height[i];
                totalRain+=totalLength;
            }
        }
        return totalRain;
    }
};