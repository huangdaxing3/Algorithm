//
// Created by xiaoli on 22-10-29.
//
class Solution {
public:
    void reverseString(vector<char>& s) {
        int i, j;
        for (i = 0, j = s.size() - 1; i < s.size() / 2; i++, j--) {
            swap(s[i], s[j]);
        }
    }
};