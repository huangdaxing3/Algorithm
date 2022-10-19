//
// Created by xiaoli on 22-10-19.
//
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        int slow = 0, fast = 1;
        while(fast < nums.size()) {
            if (nums[slow] != nums[fast]) {
                nums[slow+1] = nums[fast];
                slow++;
            }
            fast++;
        }
        return slow+1;
    }
};