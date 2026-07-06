class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](auto& a, auto& b) {return a[0] == b[0] ? a[1] > b[1] : a[0] < b[0];});
        int res = 0, right=0;
        for (auto& interval : intervals) {
            if (interval[1] > right) {
                res++;
                right = interval[1];
            }
        }
        return res;
    }
};