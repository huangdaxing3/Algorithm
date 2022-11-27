//
// Created by xiaoli on 22-11-26.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        if (nums.size() <= 1) return nums.size();
        int m = 0;
        int n = 0;
        int result = 1;
        for (int i = 0; i < nums.size() - 1; i++) {
            m = nums[i + 1] - nums[i];
            if ((m > 0 && n <= 0) || (m < 0 && n >= 0)) {
                result++;
                n = m;
            }
        }
        return result;
    }
};

int main()
{
    Solution p;
    vector<int> q = {1,7,4,9,2,5};
    int re = p.wiggleMaxLength(q);
    cout << re;
    return 0;
}