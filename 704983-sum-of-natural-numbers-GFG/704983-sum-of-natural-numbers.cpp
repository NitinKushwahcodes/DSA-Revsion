class Solution {
  public:
    int find(int sum, int n){
        if(n == 0) return sum;
        sum += n;
        find(sum, n-1);
    }
    int sumOfNaturals(int n) {
        // code here
        int sum = 0;
        return find(sum, n);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna