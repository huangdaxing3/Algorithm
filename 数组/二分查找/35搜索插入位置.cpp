//
// Created by xiaoli on 22-10-17.
//
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0, right = nums.size();
        if (target > nums[right - 1]) return nums.size();
        if (target < nums[0]) return 0;
        while (left < right) {
            int middle = (left + right) / 2;
            if (nums[middle] > target) {
                if (nums[middle - 1] < target) return middle;
                if (nums[middle - 1] == target) return middle-1;
                right = middle;
            } else if (nums[middle] < target) {
                if (nums[middle + 1] >= target) return middle+1;
                left = middle + 1;
            } else {
                return middle;
            }
        }
        return -1;
    }
};
for (int i = 0; i < s.size(); i += (2 * k)) {
            // 1. 每隔 2k 个字符的前 k 个字符进行反转
            // 2. 剩余字符小于 2k 但大于或等于 k 个，则反转前 k 个字符
            if (i + k <= s.size()) {
                reverse(s.begin() + i, s.begin() + i + k );
            } else {
                // 3. 剩余字符少于 k 个，则将剩余字符全部反转。
                reverse(s.begin() + i, s.end());
            }
        }
        return s;