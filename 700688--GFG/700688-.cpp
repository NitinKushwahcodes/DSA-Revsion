/* Structure of Binary Tree Node
class Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

class Solution {
  public:
    vector<int> zigZagTraversal(Node* root) {
        // code here
        vector<int>ans;
        if(root == NULL){
            return ans;
        }
        queue<Node*>q;
        q.push(root);
        bool f = false;
        while(!q.empty()){
            int sz = q.size();
            vector<int>v(sz);
            for(int i=0; i<sz; i++){
                Node* curr = q.front();
                q.pop();
                int idx = i;
                if(f){
                    idx = sz-i-1;
                }
                v[idx] = curr->data;
                if(curr->left){
                    q.push(curr->left);
                }
                if(curr->right){
                    q.push(curr->right);
                }
            }
            for(int num: v){
                ans.push_back(num);
            }
            f = !f;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna