class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
    // vector<int>output;
    // output.push_back(pref[0]);
    for(int i=pref.size()-1;i>0;i--)
        pref[i]=pref[i]^pref[i-1];
    return pref;
    }
};