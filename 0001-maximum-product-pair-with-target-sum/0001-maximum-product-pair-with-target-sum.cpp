class Solution {
public:
    vector<int> maxProductPair(vector<int>& nums, int target) {
        int mx = INT_MIN;
        unordered_map<int,int>mp;
        vector<int>v = {-1,-1};
        for(int i=0; i<nums.size(); i++){
            int p = target-nums[i];
            if(mp.find(p) != mp.end() && nums[i] != p){
                if(p*nums[i] > mx){
                    mx = p*nums[i];
                    if(nums[i] > p){
                    v = {i, mp[p]};
                    }
                    else{
                    v = {mp[p], i};
                    }
                }
            }
            mp[nums[i]] = i;
        }
        return v;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna