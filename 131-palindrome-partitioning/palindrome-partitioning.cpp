class Solution {
public:

bool isPalindrome(string s, int left, int right){
  while(left<right){
    if(s[left]!=s[right]){
        return false;
    }
    left++;
    right--;
  }
  return true;
}
void Helper(int index, vector<vector<string>>&res, vector<string>&vt, string s){
  if(index==s.size()){
    res.push_back(vt);
    return;
  }

  for(int i=index;i<s.size();i++){
    if(isPalindrome(s, index, i)){
        // Take Approach:
        string sub=s.substr(index, i-index+1);
        vt.push_back(sub);
        Helper(i+1, res, vt, s);

        // Take Back:
        vt.pop_back();
    }
  }
}

    vector<vector<string>> partition(string s) {
  vector<vector<string>>res;
  vector<string>vt;
  int i=0;
  Helper(i, res, vt, s);
  return res;
    }
};