//
// Created by xiaoli on 22-10-19.
//
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int slow = 0, fast;
        for (int fast = 0; fast < nums.size(); fast++) {
            if (nums[fast] != val) {
                nums[slow] = nums[fast];
                slow++;
            }
        }
        return slow;
    }
};