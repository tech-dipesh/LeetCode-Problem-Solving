class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int totalCount=0;
        while(left!=right){
            left>>=1;
            right>>=1;
            totalCount++;
        }
        return (left<<totalCount);
    }
};