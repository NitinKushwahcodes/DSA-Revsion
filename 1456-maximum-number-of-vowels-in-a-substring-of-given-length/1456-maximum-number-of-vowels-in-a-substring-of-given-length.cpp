class Solution {
public:
    bool isVobel(char ch){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch =='u'){
            return true;
        }
        return false;
    }
    int maxVowels(string s, int k) {
        int count = 0;
        for(int i=0; i<k; i++){
            if(isVobel(s[i])) count++;
        }
        int st = 0;
        int end = k;
        int max_count = count;
        while(end < s.length()){
            if(isVobel(s[end++])) count++;
            if(isVobel(s[st++])) count--;
            max_count = max(max_count, count);
        }
        return max_count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna