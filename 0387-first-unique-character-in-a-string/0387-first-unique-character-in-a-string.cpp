class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> freq(26, 0);

        for(char ch : s)
            freq[ch - 'a']++;

        for(int i = 0; i < s.size(); i++) {
            if(freq[s[i] - 'a'] == 1)
                return i;
        }

        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna