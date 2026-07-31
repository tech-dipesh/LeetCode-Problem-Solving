class Solution {
public:
    int minimumPushes(string word) {
        int total = 0;
        int freq[26] = {0};
        for (int i = 0; i < word.size(); i++) {
            freq[word[i] - 'a']++;
        }
        sort(word.begin(), word.end());
        word.erase(unique(word.begin(), word.end()), word.end());
        sort(freq, freq + 26, greater<int>());
        for (int i = 0; i < 26; i++) {
            if (freq[i] == 0)
                break;
            total += freq[i] * ((i / 8) + 1);
        }
        return total;
    }
};