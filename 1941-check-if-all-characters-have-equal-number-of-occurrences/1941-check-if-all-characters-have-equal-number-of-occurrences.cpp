class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int>mp;
        for(char ch: s){
            mp[ch]++;
        }
        int freq = mp[s[0]];
        for(auto x: mp){
            if(freq != x.second){
                return false;
            }
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna