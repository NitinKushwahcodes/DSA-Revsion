class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n,0);
        int p=0;
        int ng=1;
        for(int num: nums){
            if(num < 0){
                ans[ng] = num;
                ng += 2;
            }
            else{
                ans[p] = num;
                p +=2;
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna