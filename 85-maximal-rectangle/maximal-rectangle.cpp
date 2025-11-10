class Solution {
    private:
    int largestHistogram(vector<int>arr, int n){
  int highHistoGram=0;
  for(int i=0;i<n;i++){
    int j=i, k=i;
    int leftCount=0, rightCount=0;
    j--;k++;
    while(j>=0 && arr[i]<=arr[j]){
      leftCount++;
      j--;
    }
    
    while(k<n && arr[i]<=arr[k]){
      rightCount++;
      k++;
    }
      int eachHistogram=(leftCount+rightCount+1)*arr[i];
      highHistoGram=max(highHistoGram, eachHistogram);
  }
  return highHistoGram;
}

public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        // Base Case:
        if(matrix.empty()){
            return 0;
        }
        int row=matrix.size(), column=matrix[0].size();
        //  vector<vector<int>>suffix(matrix.size(), vector<int>(matrix[0].size(), 0));
//   int maxRes=0;
    vector<int>height(column, 0);
  int  maxRes=0;
  for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
      if(matrix[i][j]=='1'){
        height[j]++;
      }
      else{
        height[j]=0;
      }
    }
    // Must Call on the each function to check the LargestHistogram
        int rowMax = largestHistogram(height, column);
        maxRes = max(maxRes, rowMax);
  }
  return maxRes;  
    }
};