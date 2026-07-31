/* Structure of Doubly Linked List Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
}; */

class Solution {
  public:
    vector<vector<int>> givenSumPairs(Node* head, int target) {
        // code here
        vector<vector<int>>ans;
        unordered_set<int>st;
        Node* temp = head;
        while(temp){
            int val = temp->data;
            if(st.count(target-val)){
                ans.push_back({target-val, val});
                st.erase(target-val);
            }
            else st.insert(val);
            temp = temp->next;
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna