//
// Created by xiaoli on 22-11-10.
//
class Solution {
    string Map[10] {
            "",
            "",
            "abc",
            "def",
            "ghi",
            "jkl",
            "mno",
            "pqrs",
            "tuv",
            "wxyz",
    };
    vector<string> result;
    string s;
    void backtrace (string &digits, int index) {
        if (index == digits.size()) {
            result.push_back(s);
            return;
        }
        int ind = digits[index] - '0';
        string tmp = Map[ind];
        for (int i = index; i < tmp.size(); i++) {
            s.push_back(tmp[i]);
            backtrace(digits, i+1);
            s.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        if (digits.size() == 0) return result;
        backtrace(digits, 0);
        return result;
    }
};