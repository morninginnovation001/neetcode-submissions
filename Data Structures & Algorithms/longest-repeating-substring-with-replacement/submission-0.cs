public class Solution {
    public int CharacterReplacement(string s, int k) {
           Dictionary<char, int> mp = new Dictionary<char, int>();

        int left = 0;
        int maxFreq = 0;
        int maxLength = 0;

        for (int right = 0; right < s.Length; right++)
        {
            char ch = s[right];

            if (!mp.ContainsKey(ch))
                mp[ch] = 0;

            mp[ch]++;

            maxFreq = Math.Max(maxFreq, mp[ch]);

            int windowLength = right - left + 1;

            if (windowLength - maxFreq > k)
            {
                mp[s[left]]--;
                left++;
            }

            maxLength = Math.Max(maxLength, right - left + 1);
        }

        return maxLength;
    }
}
