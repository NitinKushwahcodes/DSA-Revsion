class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int st = 1;
        if(n <=2) return n;
        for(int i=2; i<nums.size(); i++){
            if(nums[i] != nums[st-1]){
                st++;
                nums[st] = nums[i];
            }
        }
        return st+1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna