class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int st = 0;
        int end = 0;
        int min_len = INT_MAX;
        int sum = 0;
        while(end < nums.size()){
            sum += nums[end];
            end++;
            while(sum >= target){
                sum -= nums[st];
                min_len = min(min_len, end-st);
                st++;
            }
        }
        if(min_len == INT_MAX) return 0;
        return min_len;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna