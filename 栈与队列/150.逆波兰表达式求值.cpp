//
// Created by xiaoli on 22-11-13.
//
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i] == '+' || tokens[i] == '-' || tokens[i] == '*' || tokens[i] == '/') {
                int n1 = st.top();
                st.pop();
                int n2 = st.top();
                st.pop();
                if (tokens[i] == '+') st.push(n2 + n1);
                if (tokens[i] == '-') st.push(n2 - n1);
                if (tokens[i] == '*') st.push(n1 * n2);
                if (tokens[i] == '/') st.push(n2 / n1);
            } else {
                st.push(stoi(tokens[i]));
            }
        }
        int result = st.top();
        st.pop();
        return result;
    }
};