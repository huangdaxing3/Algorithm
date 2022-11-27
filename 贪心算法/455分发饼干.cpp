//
// Created by xiaoli on 22-11-26.
//
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int insert = s.size() - 1;
        int result = 0;
        for (int i = g.size() - 1; i >= 0; i--) {
            if (insert >= 0 && s[insert] >= g[i]) {
                result++;
                insert--;
            }
        }
        return result;
    }
};