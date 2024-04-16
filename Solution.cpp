class Solution {
public:
    string greatestLetter(string s) {
        int u_freq[26], l_freq[26];
        memset(u_freq, 0, sizeof(u_freq));
        memset(l_freq, 0, sizeof(l_freq));
        for (char& c : s) {
            if (isupper(c)) {
                u_freq[c-'A']++;
            } else {
                l_freq[c-'a']++;
            }
        }
        string ans = "";
        for (int i = 0; i < 26; i++) {
            if (u_freq[i] > 0 && l_freq[i] > 0) {
                ans = string(1, char('A' + i));
            }
        }
        return ans;
    }
};
