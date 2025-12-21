class Solution {
public:
    string totalDigit(int x) {
    string s = to_string(x);
    sort(s.begin(), s.end());
    return s;
}
    bool reorderedPowerOf2(int n) {
       auto Digit=totalDigit(n);
    //    32 bits'
        for (int i = 0; i < 31; i++) {
            if (totalDigit(1 << i) == Digit) return true;
        }
        return false;
    }
};