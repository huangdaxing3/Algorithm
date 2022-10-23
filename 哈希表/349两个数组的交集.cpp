//
// Created by xiaoli on 22-10-23.
//
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> tmp(nums1.begin(), nums1.end());
        unordered_set<int> num;
        for (int n : nums2) {
            if (tmp.find(n) != tmp.end()) num.insert(n);
        }
        return vector<int>(num.begin(), num.end());
    }
};