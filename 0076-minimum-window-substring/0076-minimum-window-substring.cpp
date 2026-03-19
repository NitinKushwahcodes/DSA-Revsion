class Solution {
public:
    string minWindow(string s, string t) {
        vector<int>freq(128,0);
        for(char ch: t) freq[ch]++;
        int required = t.size();
        int start = 0;
        int min_len = INT_MAX;
        int right = 0, left = 0;
        while(right < s.size()){
            if(freq[s[right]] > 0){
                required--;
            }
            freq[s[right++]]--;
            while(required == 0){
                if(right-left < min_len){
                    min_len = right-left;
                    start = left;
                }
                freq[s[left]]++;
                if(freq[s[left]] > 0){
                    required++;
                }
                left++;
            }
        } 
        if(min_len == INT_MAX) return "";
        return s.substr(start, min_len);
    }
};