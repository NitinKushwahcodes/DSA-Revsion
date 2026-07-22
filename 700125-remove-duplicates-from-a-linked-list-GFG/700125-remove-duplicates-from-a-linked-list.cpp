/* Structure of linked list Node
class Node {
public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};*/
class Solution {
  public:
    Node* removeDuplicates(Node* head) {
        // code here
        unordered_set<int>st;
        Node* temp = head;
        Node* dummy = new Node(0);
        Node* temp2 = dummy;
        while(temp != NULL){
            if(!st.count(temp->data)){
                temp2->next = temp;
                temp2 = temp2->next;
                st.insert(temp->data);
            }
            temp = temp->next;
        }
        temp2->next = NULL;
        return dummy->next;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna