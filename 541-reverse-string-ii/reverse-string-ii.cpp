class Solution {
public:
    string reverseStr(string s, int k) {
        string res=s;
       for(int i=0;i<s.size();i+=2*k){
       int l=i;
       int r=min(i+k-1, (int)s.size()-1);
       while(l<r){
        swap(res[l], res[r]);
        l++;
        r--;
       }
       }
        return res;
    }
};