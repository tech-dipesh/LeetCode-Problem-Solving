class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int leftSide=0, rightSide=0, maxSum=0;
    for(int i=0;i<k;i++){
         leftSide+=cardPoints[i];
 }
 maxSum=leftSide;
    int i=k-1, j=cardPoints.size()-1;
  while(i>=0 &&j>=0){
        leftSide-=cardPoints[i--];
        rightSide+=cardPoints[j--];
      maxSum=max(maxSum, leftSide+rightSide);
  }
        return maxSum;
    }
};