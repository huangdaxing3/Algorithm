//
// Created by xiaoli on 22-11-10.
//
class Solution {
    vector<vector<int>> result;
    vector<int> path;
    void backtrace(int k, int n, int sum, int index) {
        if (path.size() == k) {
            if (sum == n) result.push_back(path);
            return;
        }
        for (int i = index; i <= 9; i++) {
            sum += i;
            path.push_back(i);
            if (sum > n) {
                sum -= i;
                path.pop_back();
                return;
            }
            backtrace(k, n, sum, i+1);
            sum -= i;
            path.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        backtrace(k, n, 0, 1);
        return result;
    }
};