class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n==0) return 0;
        long long res = 0, sum = 0, temp = n;
        while (temp) {
            sum += (temp % 10);
            temp /= 10;
        }
        temp = n;
        int next = 1;
        string s = to_string(n);
        s.erase(remove(s.begin(), s.end(), '0'), s.end());
        return sum*(stoi(s));
    }
};