class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int ev = 0;
        int od = 1;
        int n = nums.size();
        while(ev<n && od<n){
            while(ev<n && nums[ev]%2 == 0){
                ev += 2;
            }
            while(od<n && nums[od]%2 != 0){
                od += 2;
            }
            if(ev<n && od<n){
                swap(nums[ev], nums[od]);
            }
        }
        return nums;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna