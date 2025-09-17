class Solution {
public:
    int maxPower(string s) {
        // Brute Force: 
        int res=0;
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                if(s[i]==s[j]){
                    res=max(j-i+1, res);
                }
                else{
                    break;
                }
            }
        }
        return res;
    }
};