//
// Created by xiaoli on 22-10-23.
//
//class Solution {
//public:
//    bool isAnagram(string s, string t) {
//        if (s.length() != t.length()) return false;
//        sort(s.begin(), s.end());
//        sort(t.begin(), t.end());
//        return s == t;
//    }
//};
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        vector<int> tmp;
        for (auto& ch : s) {
            tmp[ch - 'a']++;
        }
        for (auto& ch : t) {
            tmp[ch - 'a']--;
            if (tmp[ch - 'a'] < 0) return false;
        }
        return true;
    }
};