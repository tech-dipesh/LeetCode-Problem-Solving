class Solution {
public:
void Reverse(string &s){
    int left=0, right=s.size()-1;
    while(left<right){
        swap(s[left], s[right]);
        left++;
        right--;
    }
}
    string removeKdigits(string num, int k) {
        // Base case if the digit are same
        if(num.size()==k){
            return "0";
        }   
        stack<char>st;
        for(int i=0;i<num.size();i++){
            while(st.size() && k>0 && st.top()>num[i]){
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
    // Any K element left:
    while(k>0){
        st.pop();
        k--;
    }
    // Storign result:
    string res="";
    while(st.size()){
        res+=st.top();
        st.pop();
    }
    // When at last there is 0 which dont' count:
    while(res.size() && res.back()=='0'){
        res.pop_back();
    }
    Reverse(res);
    return res.size()>0?res:"0";
    }
};