class Solution {
public:
    int countVowelSubstrings(string word) {
        unordered_set<char>vowels{'a', 'e', 'i', 'o', 'u'};
        int count=0;
       for(int i=0;i<word.size();i++){
        // if(vowels.seen!=vowels[i]) continue;
        if(!vowels.count(word[i])) continue;
        // if(find(vowels.begin(), vowels.end(), word[i])!=vowels.end()) continue;
        set<char>seen;
        for(int j=i;j<word.size();j++){
            char ch=word[j];
            if(!(ch=='a' || ch=='e' ||  ch=='i' || ch=='o' ||  ch=='u')) break;
        //  if(word[j]!=vowels) break;
         seen.insert(ch);
            if(seen.size()==5) count++;
        }
       }
          return count;
    }
};