class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int>st;
        // Starting:
        st.push(-1);
        int length=0;
        //insert element to the stack if opening appear:
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(i);
            }
            else{
                st.pop();
                // if stack empty insert element
                if(st.empty()){
                    st.push(i);
                }
                else{
                    length=max(length, i-st.top());
                }
            }
        }
        return length;
    }
};