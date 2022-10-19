//
// Created by xiaoli on 22-10-17.
//
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = getLeft(nums, target);
        int right = getRight(nums, target);
        if (left == -2 || right == -2) return {-1, -1};
        if (right - left > 1) return {left+1, right};
        return {-1, -1};
    }
private:
    int getRight(vector<int>& nums, int target) {
        int left = 0, right = nums.size()-1;
        int flag = -2;
        while (left <= right) {
            int middle = left + (right - left) / 2;
            if (nums[middle] > target) {
                right = middle - 1;
            } else {
                left = middle + 1;
                flag = left
            }
        }
        return flag;
    }
    int getLeft(vector<int>& nums, int target) {
        int left = 0, right = nums.size()-1;
        int flag = -2;
        while (left <= right) {
            int middle = left + (right - left) / 2;
            if (nums[middle] >= target) {
                right = middle - 1;
                flag = right;
            } else {
                left = middle + 1;
            }
        }
        return flag;
    }
};