class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        // By default all value wil be a 0 on vector.
        vector<int>vt(temperatures.size(), 0);

        // Requird a stack with index and that value
        stack<pair<int, int>>st;
        for(int i=0;i<temperatures.size();i++){
            // Till we don't find any larger element
            while(!st.empty() && temperatures[i]>st.top().first){
            int tp=st.top().second;
            vt[tp]=i-tp;
            st.pop();
           }
           st.push({temperatures[i], i});
        }
    return vt;
    }
};