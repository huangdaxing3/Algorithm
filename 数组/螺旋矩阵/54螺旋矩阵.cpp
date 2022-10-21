//
// Created by xiaoli on 22-10-21.
//
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        int m = matrix.size();
        int n = matrix[0].size();
        int a = m;
        int b = n;
        // cout << m << n;
        if (m == 1) return matrix[0];
        if (n == 1) {
            for (int i = 0; i < m; i++) res.push_back(matrix[i][0]);
            return res;
        }
        int count = m < n ? n / 2 : m / 2;
        int offset = 1;
        int k = 0, l = 0;
        int i, j;
        int tmp = 0;
        int h = m*n;
        while (count > 0) {
            i = k;
            j = l;
            for (j = l; j < n - offset; j++) {
                res.push_back(matrix[l][j]);
                cout << matrix[l][j];
                tmp += 1;
                if (tmp == h) {
                    count = -1;
                    break;
                }
                cout << tmp << "a ";
            }
            if (count == -1) break;
            for (i = k; i < m - offset; i++) {
                res.push_back(matrix[i][j]);
                cout << matrix[i][j];
                tmp += 1;
                if (tmp == h) {
                    count = -1;
                    break;
                }
                cout << tmp << "b ";
            }
            if (count == -1) break;
            for (; j > l; j--) {
                res.push_back(matrix[i][j]);
                cout << matrix[i][j];
                tmp += 1;
                if (tmp == h) {
                    count = -1;
                    break;
                }
                cout << tmp << "c ";
            }
            if (count == -1) break;
            for (; i > k; i--) {
                res.push_back(matrix[i][j]);
                cout << matrix[i][j];
                tmp += 1;
                if (tmp == h) {
                    count = -1;
                    break;
                }
                cout << tmp << "d ";
            }
            if (count == -1) break;
            k++;
            l++;
            offset++;
            count--;
        }
        if (a == b) {
            if (a % 2) {
                cout << "entry";
                int mid = a / 2;
                res.push_back(matrix[mid][mid]);
            }
        }
        return res;
    }
};