//
// Created by xiaoli on 22-10-19.
//
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        return tmp(s) == tmp(t);
    }
    string tmp(string str) {
        string s;
        for (char ch : str) {
            if (ch != '#') {
                s.push_back(ch);
            } else if (!s.empty()){
                s.pop_back();
            }
        }
        return s;
    }
};