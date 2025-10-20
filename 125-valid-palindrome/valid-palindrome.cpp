class Solution {
public:
    bool isPalindrome(string s) {
        string st;
        //First Move all alphbest and numeric to another string with lower 
        for(int i:s){
            if(isalnum(i)){
                st+=tolower(i);
            }
        }
        // Two Pointer
        int left=0, right=st.size()-1;
        while(left<right){
            if(st[left]!=st[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};