class Solution {
public:
    bool isSameAfterReversals(int num) {
        int original=num;
       int res=0;
       int rev=0;
    //    while(num%10==0){
    //     num/=10;
    //    }
       while(num){
        res=res*10+(num%10);
        num/=10;
        }
        
        while(res){
            int rem=res%10;
            rev=(rev*10)+rem;
            res/=10;
        }
        return original==rev?true:false;
    }
};