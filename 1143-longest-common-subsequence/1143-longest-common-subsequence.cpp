class Solution {
public:
    int longestCommonSubsequence(string a, string b) {
        int x=a.size(),y=b.size();
        vector<int> p(y+1,0),q(y+1,0);
        for(int i=1;i<=x;i++) {
            for(int j=1;j<=y;j++) {
                if(a[i-1]==b[j-1]) q[j]=1+p[j-1];
                else q[j]=max(p[j],q[j-1]);
            }
            p=q;
        }
        return p[y];
    }
};
