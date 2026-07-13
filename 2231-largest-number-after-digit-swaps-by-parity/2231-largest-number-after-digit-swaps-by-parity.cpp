class Solution {
public:
    int largestInteger(int num) {
        string s = to_string(num);
        vector<int>v1;
        vector<int>v2;
        for(char ch : s){
            int num = ch-'0';
            if(num%2 == 0) v1.push_back(num);
            else v2.push_back(num);
        }
        sort(v1.rbegin(), v1.rend());
        sort(v2.rbegin(), v2.rend());
        int ans=0;
        int ev=0;
        int od=0;
        for(char ch: s){
            int num = ch-'0';
            if(num%2 == 0){
                ans = ans*10 + v1[ev];
                ev++;
            }
            else{
                ans = ans*10 + v2[od];
                od++;
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna