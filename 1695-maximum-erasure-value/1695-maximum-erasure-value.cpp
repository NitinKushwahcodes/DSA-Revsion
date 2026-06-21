class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int sum = 0;
        int max_sum = 0;
        int st = 0;
        int end = 0;
        unordered_set<int>s;
        while(end < nums.size()){
            while(s.find(nums[end]) != s.end()){
                sum -= nums[st];
                s.erase(nums[st++]);
            }
            s.insert(nums[end]);
            sum +=  nums[end++] ;
            max_sum = max(max_sum, sum);
        }
        return max_sum;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna