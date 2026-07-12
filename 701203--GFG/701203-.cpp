class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        // code here
        int ts = 0;
        for(int num: arr) ts+=num;
        int ls = 0;
        int rs = 0;
        for(int i=0; i<arr.size()-1; i++){
            ls += arr[i];
            rs = ts-ls-arr[i+1];
            if(ls == rs){
                return i+1;
            }
        }
        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna