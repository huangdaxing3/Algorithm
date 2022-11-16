//
// Created by xiaoli on 22-11-13.
//
class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        string result;
        for (auto ch : s) {
            if (st.empty()) {
                st.push(ch);
            } else if (st.top() == ch) {
                st.pop();
            } else {
                st.push(ch);
            }
        }
        while (!st.empty()) {
            result.push_back(st.top());
            st.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};