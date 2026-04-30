class Solution {
public:
    bool isOperator(string st) {
        return (st == "+" || st == "-" || st == "/" || st == "*" || st == "%");
    }
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for (string i : tokens) {
            if (!isOperator(i)) {
                int value = stoi(i);
                s.push(value);
            } else {
                int second = s.top();
                s.pop();
                int first = s.top();
                s.pop();
                switch (i[0]) {
                case '+':
                    s.push(first + second);
                    break;
                case '-':
                    s.push(first - second);
                    break;
                case '*':
                    s.push(first * second);
                    break;
                case '/':
                    s.push(first / second);
                    break;
                case '%':
                    s.push(first % second);
                    break;
                }
            }
        }
            return s.top();
        }
    };