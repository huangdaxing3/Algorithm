//
// Created by xiaoli on 22-10-20.
//
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> cnt;
        int left = 0, ans = 0;
        for (int j = 0; j < fruits.size(); j++) {
            ++cnt[fruits[j]];
            while (cnt.size() > 2) {
                auto it = cnt.find(fruits[left]);
                --it->second;
                if (it->second == 0) cnt.erase(it);
                ++left;
            }
            ans = max(ans, j - left +1);
        }
        return ans;
    }
};