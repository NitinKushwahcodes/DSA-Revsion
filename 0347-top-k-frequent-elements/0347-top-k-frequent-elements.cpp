class Solution {
public:
    vector<int> topKFrequent(vector<int>& arr, int k) {
        unordered_map<int, int>mp;
        for(int num: arr){
            mp[num]++;
        }
        vector<vector<int>>bucket(arr.size()+1);
        for(auto it: mp){
            bucket[it.second].push_back(it.first);
        }
        vector<int>ans;
        for(int i=bucket.size()-1; i>=0; i--){
            if(bucket[i].size() == 0){
                continue;
            }
            for(int j=0; j<bucket[i].size(); j++){
                if(k == 0){
                    return ans;
                }
                ans.push_back(bucket[i][j]);
                k--;
            }
        }
        return ans;
    }
};