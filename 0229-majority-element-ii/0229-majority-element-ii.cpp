class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int>mp;
        unordered_set<int>st;
        vector<int>ans;
        for(int num: nums){
            mp[num]++;
            if(mp[num]>n/3){
                st.insert(num);
            }
        }
        for(int num: st) ans.push_back(num);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna