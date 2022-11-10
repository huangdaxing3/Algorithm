//
// Created by xiaoli on 22-11-10.
//
class Solution {
    vector<vector<int>> result;
    vector<int> path;
    void backt(int n, int k, int index) {
        if (path.size() == k) {
            result.push_back(path);
            return;
        }
        for (int i = index; i <= n; i++) {
            path.push_back(i);
            backt(n, k, i + 1);
            path.pop_back();
        }
    }
public:
    vector<vector<int>> combine(int n, int k) {
        backt(n, k, 1);
        return result;
    }
};