class Solution {
public:
    int brokenCalc(int startValue, int target) {
    // Using a logic of the until the target number is bigger.
    //  Where i'll be keep trying to make a target if the number is even keep divide by 1.
    // else just add a target value to ake a even number
    // and just divide a value with a count that's it.
    int count = 0;
    while (target > startValue) {
        if (target % 2 != 0) {
            target ++;
        } else {
            target/=2;
        }
        count++;
    }
    return count + (startValue - target);
    }
};