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