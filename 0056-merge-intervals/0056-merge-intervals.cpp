class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());
        int j = 0;
        for(int i=1; i<n; i++){
            if(intervals[i][0] <= intervals[j][1]){
                intervals[j][1] = max(intervals[i][1], intervals[j][1]);
            }
            else{
                j++;
                intervals[j] = intervals[i];
            }
        }
        intervals.resize(j+1);
        return intervals;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna