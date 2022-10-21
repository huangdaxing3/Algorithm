//
// Created by xiaoli on 22-10-21.
//
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n, vector(n, 0));
        int x = 0, y = 0;
        int loop = n / 2;
        int mid = n / 2;
        int count = 1;
        int offset = 1;
        int i, j;
        while (loop--) {
            i = x;
            j = y;
            for (j = y; j < n - offset; j++) res[x][j] = count++;
            for (i = x; i < n - offset; i++) res[i][j] = count++;
            for (; j > y; j--) res[i][j] = count++;
            for (; i > x; i--) res[i][j] = count++;
            x++;
            y++;
            offset++;
        }
        if (n % 2) res[mid][mid] = count;
        return res;
    }
};