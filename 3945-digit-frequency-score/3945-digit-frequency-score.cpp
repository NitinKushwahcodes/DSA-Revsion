class Solution {
public:
    int digitFrequencyScore(int n) {
        vector<int>v(10,0);
        while(n != 0){
            int digit = n%10;
            v[digit]++;
            n /= 10;
        }
        int ans = 0;
        for(int i=0; i<10; i++){
            ans += v[i]*i;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna