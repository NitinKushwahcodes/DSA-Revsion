class Solution {
public:
    void printAllSubsets(vector<int>&nums1, vector<vector<int>>&nums2, vector<int>&ans, int i){
        if(i == nums1.size()){
          nums2.push_back(ans);
          return;  
        }
        ans.push_back(nums1[i]);
        printAllSubsets(nums1, nums2, ans, i+1);
        ans.pop_back();
        printAllSubsets(nums1, nums2, ans, i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>allSubsets;
        vector<int>ans;
        printAllSubsets(nums, allSubsets, ans, 0);
        return allSubsets;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna