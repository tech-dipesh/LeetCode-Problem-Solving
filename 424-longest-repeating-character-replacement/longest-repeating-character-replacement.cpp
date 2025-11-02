class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxValue=0, count=0;
        int left=0, right=0;
        int mp[26]={0};
        while(right<s.size()){
            mp[s[right]-'A']++;
            // where out of range:
            count=max(count, mp[s[right]-'A']);
            if((right-left+1)-count>k){
                mp[s[left]-'A']--;
                left++;
            }
            maxValue=max(maxValue, right-left+1);
            right++;
        }
        return maxValue;
    }
};