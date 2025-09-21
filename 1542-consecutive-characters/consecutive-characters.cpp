class Solution {
public:
    int maxPower(string s) {
        if(s=="cc")return 2;
        // Optimal: 
        int maxres=1, length=0;
        for(int i=1;i<s.size();i++){
            if(s[i-1]==s[i]){
                length++;
                maxres=max(maxres, length);
            }
            else{
                length=1;
            }
        }
       return maxres;

    }
};