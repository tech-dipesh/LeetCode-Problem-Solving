class Solution {
public:
    long long maxRunTime(int n, vector<int>& batteries) {
        // Greedy first do the sum and just subtract a value that's it.
        sort(batteries.begin(), batteries.end());
        long long sumValue=0;
        for(int i:batteries)sumValue+=i;


        int size=batteries.size();
        for (int i = size-1; i >= 0; i--) {
            if (batteries[i] <= sumValue / n) break;
            sumValue -= batteries[i];
            n--;
        }
    long long res=sumValue/n;
    return res;
    }
};