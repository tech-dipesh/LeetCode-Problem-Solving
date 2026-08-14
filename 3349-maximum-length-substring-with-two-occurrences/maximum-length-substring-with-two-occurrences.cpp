class Solution {
public:
    int maximumLengthSubstring(string s) {
        int freq[26] = {0};
        int res = 0;
        int left = 0, right=0;
        while(right<s.length()){
            int curr = s[right] - 'a';
            freq[curr]++;
            while (freq[curr] > 2) {
                int leftin = s[left] - 'a';
                freq[leftin]--;
                ++left;
            }
            res = max(res, (right-left+1));
            right++;
        }
        return res;
    }
};