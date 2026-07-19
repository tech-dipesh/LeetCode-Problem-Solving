class Solution {
public:
    string smallestSubsequence(string s) {
          vector<int> freq(26, 0);
        vector<bool> visit(26, false);
        string res;
// This is the Hashmap for check a frequncey
        for (char c : s){
            freq[c - 'a']++;
        }
// Checking whether that number is appear o rnot
        for (char c : s) {
            // This is where it decreae by 1
            freq[c - 'a']--;
            if (visit[c - 'a']){
                continue;
            }
            // auto lastelement=freq[res.back() - 'a'];
            
            while (!res.empty() && res.back() > c && freq[res.back() - 'a']> 0) {
                visit[res.back() - 'a'] = false;
                res.pop_back();
            }
// Pushing to the Result
            res.push_back(c);
            // making a Visited element
            visit[c - 'a'] = true;
        }
        return res;
    }
};