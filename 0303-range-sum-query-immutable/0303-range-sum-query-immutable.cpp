class NumArray {
public:
    vector<int>v;
    NumArray(vector<int>& nums) {
        v.resize(nums.size());
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            v[i] = sum;
        }
    }
    
    int sumRange(int left, int right) {
        if(left == 0){
            return v[right];
        }
        return v[right]-v[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna