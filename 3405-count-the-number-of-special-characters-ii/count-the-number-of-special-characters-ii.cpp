class Solution {
public:
    int numberOfSpecialChars(string word) {
        int low[26]={-1};
        int up[26]={-1};
        int c = 0;
        // i must have to manually add a -1 on the every value else it become a 0
        // or also i can make a 0 and check that
        // another approach can be using a vector space with set a -1 that can be also a another approach
        for (int i = 0; i < 26; i++) {
            low[i] = -1;
            up[i] = -1;
        }
        for (int i = 0; i < word.size(); i++) {
            char ch = word[i];
            if (ch >= 'a' && ch <= 'z') {
                low[ch - 'a'] = i;
            } else if (ch >= 'A' && ch <= 'Z') {
                int idx = ch - 'A';
                if (up[idx] == -1) {
                    up[idx] = i;
                }
            }
        }

        for (int i = 0; i < 26; i++) {
            if (low[i] != -1 && up[i] != -1 &&
                low[i] < up[i]) {
                c++;
            }
        }

        return c;
    }
};