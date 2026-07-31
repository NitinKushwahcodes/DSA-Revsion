/* Structure of Tree Node
class Node
{
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/

class Solution {
  public:
    
    vector<int> preOrder(Node* root) {
        // code here
        vector<int>ans;
        if(root == NULL) return ans;
        stack<Node*>st;
        st.push(root);
        while(!st.empty()){
            Node* curr = st.top();
            st.pop();
            ans.push_back(curr->data);
            if(curr->right){
                st.push(curr->right);
            }
            if(curr->left){
                st.push(curr->left);
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna