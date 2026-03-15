class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()) return false;
        int n = s1.size();
        int m = s2.size();
        vector<int>v1(26, 0);
        vector<int>v2(26, 0);
        for(char ch: s1) v1[ch-'a']++;
        for(int i=0; i<s1.size(); i++){
            v2[s2[i] - 'a']++;
        }
        if(v1 == v2) return true;
        for(int i=n; i<m; i++){
            v2[s2[i-n] - 'a']--;
            v2[s2[i] - 'a']++;
            if(v1 == v2){
                return true;
            }
        }
        return false;
    }
};