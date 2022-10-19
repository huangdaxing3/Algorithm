//
// Created by xiaoli on 22-10-17.
//
class Solution {
public:
    int mySqrt(int x) {
        int l = 0, r = x, ans = -1;
        while (l <= r) {
            int middle = l + (r - l) / 2;
            if ((long long)middle * middle <= x) {
                ans = middle;
                l = middle + 1;
            } else {
                r = middle - 1;
            }
        }
        return ans;
    }
};