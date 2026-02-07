class Solution {
public:
    int minimumDeletions(string s) {
        int i=0, j=0;
        int output=s.size();
        for(int a=0;a<s.size();a++){
            i+=s[a] & 1;
        }
        for(int a=0;a<s.size();a++){
            i-=s[a] & 1;
            output=min(output, i+j);
            j+=~s[a] & 1;
        }
    return output;
    }
};
