class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>st;
        int big=0;
        for(int i=0;i<heights.size();i++){
            
            // Stack storing the indices so have to keep in mind:
            while(st.size() && heights[st.top()]>heights[i]){
                    int stackTop=heights[st.top()];   
                    st.pop();
            // Getting teh pse element from the stack:
            int pse=st.size()?st.top():-1;
            int nse=i;
            big=max(big, stackTop*(nse-pse-1));
            }
            // index push
            st.push(i);
        }
        // Maybe there is the still some element left:
        while(st.size()){
            int topEl=st.top();
            st.pop();
            // While pse is the top of element value
            int pse=st.size()?st.top():-1;
            // nse will alwasy be n on left stack element.
            int nse=heights.size();
            big=max(big, heights[topEl]*(nse-pse-1));
        }
        return big;
    }
};