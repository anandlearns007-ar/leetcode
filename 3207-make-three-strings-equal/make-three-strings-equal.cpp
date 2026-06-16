class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        int len1 = s1.size(), len2 = s2.size(), len3 = s3.size();
        int len = min({len1, len2, len3});

        int max_len = 0;
        for (int i = 0; i < len; i++) {
            if (s1[i] == s2[i] && s2[i] == s3[i]) {
                max_len++;
            } else {
                break;
            }
        }

        return max_len == 0 ? -1 : len1 + len2 + len3 - 3 * max_len;
    }
};