class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = m*m;
        int act_sum = (n*(n+1))/2;
        long long act_sum_sq = (1LL*n*(2LL*n + 1)*(1LL*n+1))/6;
        int curr_sum = 0;
        long long curr_sum_sq = 0;
        for(int i=0; i<m; i++){
            for(int j=0; j<m; j++){
                curr_sum += grid[i][j];
                curr_sum_sq += 1LL*grid[i][j]*grid[i][j];
            }
        }
        int a = act_sum - curr_sum;
        long long b = act_sum_sq - curr_sum_sq;
        int missing = (b/a + a)/2;
        int repeating = missing - a;
        return {repeating, missing};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna