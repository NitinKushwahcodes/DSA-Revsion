class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        unordered_set<int>st;
        for(int num: nums){
            st.insert(num);
        }
        int ans = 1;
        for(auto it: st){
            if(st.find(it-1) == st.end()){
                int count = 1;
                int nxt = it+1;
                while(st.find(nxt) != st.end()){
                    nxt++;
                    count++;
                }
                ans = max(count, ans);
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna