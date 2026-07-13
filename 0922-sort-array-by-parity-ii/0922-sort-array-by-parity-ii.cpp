class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n,0);
        int ev=0;
        int od=1;
        for(int num: nums){
            if(num%2==0){
                ans[ev] = num;
                ev += 2;
            }
            else{
                ans[od] = num;
                od += 2;
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna