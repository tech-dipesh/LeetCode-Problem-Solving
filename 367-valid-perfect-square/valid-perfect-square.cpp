class Solution {
public:
    bool isPerfectSquare(int num) {
        long long square, low=0, high=num;
        // int low=0, high=num;
        while(low<=high){
          long long mid=(low+high)/2;
        square=mid*mid;
        if(square==num) return true;
        else if(square<num) low=mid+1;
        else high=mid-1;
        }
        return false;
    }
};