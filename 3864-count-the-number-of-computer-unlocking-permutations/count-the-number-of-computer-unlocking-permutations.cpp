class Solution {
public:
    int mod=1000000007;
    int countPermutations(vector<int>& complexity) {
        for (int i = 1; i < complexity.size(); i++) {
            if (complexity[i] <= complexity[0]) return 0;
        }

        long long f = 1;
        for (int i = 2; i < complexity.size(); i++) {
            f = (f * i) % mod;
        }
        int res=f;
        return res;
    }
};