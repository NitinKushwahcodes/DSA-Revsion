class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> m{
            {'I',1},{'V',5},{'X',10},
            {'L',50},{'C',100},{'D',500},{'M',1000}
        };
        int res=0;
        int n=s.size();
        for(int i=0;i<n;i++) {
            int cur=m[s[i]];
            int nxt=0;
            if(i+1<n) {
                nxt=m[s[i+1]];
            }
            if(cur<nxt) {
                res-=cur;
            }
            else {
                res+=cur;
            }
        }
        return res;
    }
};
