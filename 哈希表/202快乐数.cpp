//
// Created by xiaoli on 22-10-23.
//
class Solution {
public:
    int get(int n) {
        int sum = 0;
        while (n) {
            sum += (n%10) * (n%10);
            n /= 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_set<int> tmp;
        while (1) {
            int sum = get(n);
            if (sum == 1) return true;

            if (tmp.find(sum) != tmp.end()) return false;
            else tmp.insert(sum);
            n = sum;
        }
    }
};