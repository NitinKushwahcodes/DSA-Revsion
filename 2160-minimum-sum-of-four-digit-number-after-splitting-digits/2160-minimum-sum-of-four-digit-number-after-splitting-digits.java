class Solution {
    public int minimumSum(int num) {
        int a = num % 10; num /= 10;
        int b = num % 10; num /= 10;
        int c = num % 10; num /= 10;
        int d = num % 10;

        // manual sort (bubble style)
        if(a > b){ int t = a; a = b; b = t; }
        if(a > c){ int t = a; a = c; c = t; }
        if(a > d){ int t = a; a = d; d = t; }
        if(b > c){ int t = b; b = c; c = t; }
        if(b > d){ int t = b; b = d; d = t; }
        if(c > d){ int t = c; c = d; d = t; }

        return (a * 10 + c) + (b * 10 + d);
    }
}