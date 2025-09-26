class Solution {
public:
    string reverseOnlyLetters(string s) {
       int left=0, right=s.size()-1;
       while(left<right){
        if(isalpha(s[right]) && isalpha(s[left])){
            swap(s[left], s[right]);
            left++;
            right--;
        }
       else if(!isalpha(s[left])){
            left++;
        }
        else{
            right--;
        }
       }
       return s;
    }
};