class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for (string c : tokens) {
            if (c == "+") {
                int op2 = st.top();
                st.pop();
                int op1 = st.top();
                st.pop();
                st.push(op1 + op2);
            } else if (c == "-") {
                int op2 = st.top();
                st.pop();
                int op1 = st.top();
                st.pop();
                st.push(op1 - op2);
            } else if (c == "*") {
                int op2 = st.top();
                st.pop();
                int op1 = st.top();
                st.pop();
                st.push(op1 * op2);
            } else if (c == "/") {
                int op2 = st.top();
                st.pop();
                int op1 = st.top();
                st.pop();
                st.push(op1 / op2);
            } else {
                st.push(stoi(c));
            }
        } 
        return st.top();
    }
};