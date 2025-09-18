class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    // Brute Force Approach:
    if(s.size()==1) return 1;
    int maxSize=0;
    for(int i=0;i<s.size();i++){
        unordered_set<int>st;
        for(int j=i;j<s.size();j++){
            if(st.find(s[j])!=st.end()){
                break;
            }
            st.insert(s[j]);
            maxSize=max(maxSize, j-i+1);
        }
    }
       return maxSize;
    }
};