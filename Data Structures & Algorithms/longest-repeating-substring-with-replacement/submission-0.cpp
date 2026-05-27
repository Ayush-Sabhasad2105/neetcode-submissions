class Solution {
public:
    int characterReplacement(string s, int k) {

        int result = 0;
        unordered_set<char> charset(s.begin(), s.end());

        for (char c : charset) {

            int count = 0, l = 0;
            for (int r = 0; r < s.size(); r++) {

                if (s[r] == c) {
                    count++;
                }

                while ((r - l + 1) - count > k) {

                    if (s[l] == c) {

                        count--;
                    }

                    l++;
                }

                result = max(result, r - l + 1);
            }
        }
        return result;
    }
};
