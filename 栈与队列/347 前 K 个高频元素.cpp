//
// Created by xiaoli on 22-11-16.
//
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> ma;
        vector<int> result;
        for (auto i : nums) {
            ma[i]++;
        }
//        reverse(ma.begin(), ma.end());
        int count = 0;
        for (auto iter = ma.end(); iter != ma.begin(); iter--) {
            count++;
            result.push_back(iter->first);
            if (count == k) break;
        }
        return result;
    }
};