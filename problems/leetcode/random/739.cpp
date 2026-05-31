class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int len = temperatures.size();
        stack<int> st;
        st.push(len - 1);
        vector<int> res(len);
        for (int i = len - 2, n; i >=0; --i) {
            n = temperatures[i];
            while (st.size() && n >= temperatures[st.top()]) {
                st.pop();
            }
            if (st.size()) {
                res[i] = st.top() - i;
            } 
            st.push(i);
        }
        return res;
    }
};