//
// Created by xiaoli on 22-10-20.
//
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int result = INT32_MAX;
        int sum = 0;
        int i = 0;
        int length = 0;
        for (int j = 0; j < nums.size(); j++) {
            sum += nums[j];
            while (sum >= target) {
                length = j-i+1;
                result = result < length ? result : length;
                sum -= nums[i++];
            }
        }
        return result == INT32_MAX ? 0 : result;
    }
};