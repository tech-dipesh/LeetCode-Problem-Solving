class Solution {
public:
    int myAtoi(string s) {
     if(s.size()==0) return 0;
        // All space remove: 
        int i=0;
        while (i < s.size() && s[i] == ' ') {
            i++;
        }
        
        if(i==s.size()) return 0;

        // If values are the operator::
        int sign = 1;
        if (s[i] == '+') {
            i++;
        } else if (s[i] == '-') {
            sign = -1;
            i++;
        }
        
        long long res = 0;
        // Only the digit number:
        while (i < s.size() && isdigit(s[i])) {
            int d = s[i] - '0';
            res = res * 10 + d;
            
            // within range then return min max
            if (sign * res <= INT_MIN) {
                return INT_MIN;
            }
            if (sign * res >= INT_MAX) {
                return INT_MAX;
            }
            
            i++;
        }
        return res*sign;
    }
};