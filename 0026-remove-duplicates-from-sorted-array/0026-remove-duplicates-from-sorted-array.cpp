class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 0;
        nums[j] = nums[0];
        for(int i=1; i<nums.size(); i++){
            if(nums[i] != nums[i-1]){
                j++;
                nums[j] = nums[i];
            }
        }
        return j+1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna