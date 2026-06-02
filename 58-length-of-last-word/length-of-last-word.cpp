    class Solution {
    public:
        int lengthOfLastWord(string s) {
            int count=s.size();
            int total=count-1;
            int ch=0;
            while(total>=0 && s[total]== ' '){
                total--;
                
            }
            while(total>=0 && s[total]!=' '){
                ch++;
                total--;
            }
return ch;
            // int final=total-ch;
            // return final;
                // else{
                //     return count;
                // }
        }
    };