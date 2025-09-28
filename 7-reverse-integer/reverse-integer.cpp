class Solution {
public:
    int reverse(int x) {
        long output=0;
        while(x){
            int rem=x%10;
            output=rem+(output*10);
            x/=10;
        }
        // Checking if the output is out of bound of max 32 bit int value or minimum compare to min 32 bit int.
        if (output > INT_MAX || output < INT_MIN)
            return 0;
        return output;
    }
};