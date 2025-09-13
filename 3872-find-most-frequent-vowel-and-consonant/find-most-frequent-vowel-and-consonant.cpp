class Solution {
public:
    int maxFreqSum(string s) {
        int times[100], mvow=0, mcon=0;
        for(char i:s){
            int in=i-'a';
            times[in]++;
            if(i=='a' || i=='e'|| i=='i'|| i=='o'|| i=='u')
                mvow=max(mvow, times[in]);
            else mcon=max(mcon, times[in]);
        }
        return mvow+mcon;
                
    }
};