class Solution {
public:
    bool isHappy(int n) {
        if(n<=0) return false;
        unordered_set<int>see;
        while(true){
        int sum=0;
        while(n>0){
         int rem=n%10;
        sum+=rem*rem;
        n/=10;
        };
        if(sum==1) return true;
        if(see.count(sum)) return false;
        else see.insert(sum);
        n=sum;
            }
            return n==1?true:false;
        }
};