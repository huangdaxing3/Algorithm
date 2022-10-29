//
// Created by xiaoli on 22-10-29.
//
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> umap;
        for (auto ch : magazine) {
            umap[ch]++;
        }
        for (auto cc : ransomNote) {
            umap[cc]--;
            if (umap[cc] < 0) return false;
        }
        return true;
    }
};