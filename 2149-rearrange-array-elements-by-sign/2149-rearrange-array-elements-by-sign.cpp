class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>v1;
        vector<int>v2;
        for(int num: nums){
            if(num < 0) v2.push_back(num);
            else v1.push_back(num);
        }
        int p=0; 
        int n=0;
        for(int i=0; i<nums.size(); i+=2){
            nums[i] = v1[p++];
        }
        for(int i=1; i<nums.size(); i+=2){
            nums[i] = v2[n++];
        }
        return nums;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna