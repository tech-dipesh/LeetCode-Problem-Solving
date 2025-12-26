class Solution {
public:
    int bestClosingTime(string customers) {
        int ally = 0;
        for (auto c : customers) {
            if (c == 'Y') ally++;
        }
        int open=0, res=0,  minPen=ally;
        for (int i = 0; i < customers.size(); i++) {
            if (customers[i] == 'N') open++;
            else ally--;
            int getCurrent=open+ally;
            // When Minimum Penalty is more thatn the current penalty
            if (getCurrent < minPen) {
                minPen=getCurrent;
                res = i + 1;
            }
        }

        return res;
    }
};


