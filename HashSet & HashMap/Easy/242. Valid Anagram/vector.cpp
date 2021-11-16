class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> cnt(26, 0);
        for (char sIter:s)
            cnt[sIter - 'a']++;
        for (char tIter:t)
            cnt[tIter - 'a']--;
        for (int num:cnt)
            if (num != 0)
                return false;
        return true;
    }
};
