// Comperator Operator to sort the element
bool Sort(vector<int>&a, vector<int>&b){
        int first=a[0]*a[0]+a[1]*a[1];
        int second=b[0]*b[0]+b[1]*b[1];
        return first<second;
    }
class Solution {
 public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        // Using Sorting Appraoch: o(nlogn)
        sort(points.begin(), points.end(), Sort);
        // Return the kth element
        return vector<vector<int>>(points.begin(), points.begin()+k);
    }
};