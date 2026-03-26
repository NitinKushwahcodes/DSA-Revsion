class Solution {
public:
    bool isValid(string s) {
        if(s.size()%2 == 1) return false;
        stack<char>st;
        for(char ch: s){
            if(!st.empty() && (ch == ')' || ch == ']' || ch == '}')){
                if(ch == ')' && st.top() == '('){
                    st.pop();
                }
                else if(ch == ']' && st.top() == '['){
                    st.pop();
                }
                else if(ch == '}' && st.top() == '{'){
                    st.pop();
                }
                else{
                    return false;
                }
            }
            else{
                st.push(ch);
            }
        }
        return st.empty();
    }
};