class Solution {
public:
    int reverseBits(int n) {
        string s(32, '0');
        int i = 0;
        while(n != 0){
            int digit = n%2;
            s[i] = digit+'0';
            n/=2;
            i++;
        }
        reverse(s.begin(), s.end());
        int ans = 0;
        int j = 0;
        for(int i = 0; i<s.length(); i++){
            if(s[i] == '1') ans += pow(2,j);
            j++;
        }
        return ans;
    }
};