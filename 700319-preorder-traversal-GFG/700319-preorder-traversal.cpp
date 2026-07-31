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
    void buildTree(vector<int>&ans, Node* root){
        if(root == NULL){
            return;
        }
        ans.push_back(root->data);
        buildTree(ans, root->left);
        buildTree(ans, root->right);
    }
    vector<int> preOrder(Node* root) {
        // code here
        vector<int>ans;
        buildTree(ans, root);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna