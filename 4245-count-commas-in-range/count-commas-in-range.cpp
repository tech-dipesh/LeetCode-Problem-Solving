class Solution {
public:
    int countCommas(int n) {
        return n<=999?0:(n-999);
        // if(n<=999) return 0;
        
        // return count<=4?0:(count/3);
    }
};