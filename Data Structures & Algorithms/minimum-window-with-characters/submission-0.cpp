
class Solution {
public:
    string minWindow(string s, string t) {

        unordered_map<char, int> mp;

        for (int i = 0; i < t.length(); i++) {
            mp[t[i]]++;
        }

        int i = 0;
        int j = 0;
        int count = t.length();

        int minLen = INT_MAX;
        int start = 0;

        while (j < s.length()) {

            if (mp[s[j]] > 0) {
                count--;
            }

            mp[s[j]]--;

            while (count == 0) {

                if (j - i + 1 < minLen) {
                    minLen = j - i + 1;
                    start = i;
                }

                mp[s[i]]++;

                if (mp[s[i]] > 0) {
                    count++;
                }

                i++;
            }

            j++;
        }

        if (minLen == INT_MAX) {
            return "";
        }

        return s.substr(start, minLen);
    }
};
