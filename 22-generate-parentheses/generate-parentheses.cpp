class Solution {
public:
    void Helper(int size, int left, int right, vector<string>&vt, string st){
        // Base Case of right size
        if(right==size){
            vt.push_back(st);
            return;
        }
        // Take Left Opening:
        if(left<size){
            Helper(size, left+1, right, vt, st+"(");
        }
        // Take Right Closing:
        if(left>right){
            Helper(size, left, right+1, vt, st+")");
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>vt;
        string res="";
        Helper(n, 0, 0, vt, res);
        return vt;
    }
};